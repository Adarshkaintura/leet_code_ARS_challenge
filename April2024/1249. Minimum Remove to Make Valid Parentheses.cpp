class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> st;
        unordered_set<int> temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push({s[i],i});
            }else if(s[i]==')'){
                  if(!st.empty() && st.top().first == '(') {
                    st.pop();
                }else{
                    temp.insert(i);
                }
            }
        }
        while(!st.empty()){
            temp.insert(st.top().second);
            st.pop();
        }
        string ans;
        for(int i=0;i<s.size();i++){
            if(temp.find(i)!=temp.end()){
                continue;
            }
            ans+=s[i];
        }
        return ans;
    }
};
