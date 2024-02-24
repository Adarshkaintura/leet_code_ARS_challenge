class Solution {
public:
    string finalString(string s) {
        string str ="";
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='i'){
                reverse(str.begin(),str.end());
            }else{
                str=str+s[i];
            }
        }
        return str;
    }
};
