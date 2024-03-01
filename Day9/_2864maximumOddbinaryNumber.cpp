class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        int n=s.length();
        string ans(n,'0');
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        while(j<count-1){
            ans[j++]='1';
        }
        ans[n-1]='1';
        return ans;
    }
};
