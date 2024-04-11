
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s1; // Changed stack<int> to stack<char>
        int n = num.size();
       
        for(char digit:num){
            while(k>0 && !s1.empty() && digit<s1.top()){
                k--;
                s1.pop();
            }
            s1.push(digit);

        }
while (k > 0 && !s1.empty()) {
            s1.pop();
            k--;
        }
        string ans="";

while(!s1.empty()){
 ans+=s1.top();
 s1.pop();
}
reverse(ans.begin(),ans.end());
while(!ans.empty() && ans[0]=='0'){
    ans.erase(0,1);
}
return ans.empty()?"0":ans;
       
    }
};
