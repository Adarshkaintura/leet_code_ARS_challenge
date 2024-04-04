//aprroach 1
class Solution {
public:
    int maxDepth(string s) {
        stack<char> s1;
        int ans=0;
        int currdepth=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                s1.push('(');
                currdepth++;
               ans=max(ans,currdepth);
            }
            if(s[i]==')'){
                s1.pop();
                currdepth--;
            }

        }
        return ans;
    }
};
//approach 2 is without using extra space
class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int currdepth=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                currdepth++;
               ans=max(ans,currdepth);
            }
            if(s[i]==')'){
                currdepth--;
            }

        }
        return ans;
    }
};
