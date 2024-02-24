class Solution {
public:
    bool found(string s){
        string str1= "qwertyuiopQWERTYUIOP";
        string str2="asdfghjklASDFGHJKL";
        string str3="zxcvbnmZXCVBNM";
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<str1.size();j++){
                if(s[i]==str1[j]){
                    if(count==2 || count==3){
                    return false;
                }
                    count=1;
                }
            }
            for(int j=0;j<str2.size();j++){
               
                if(s[i]==str2[j]){
                     if(count==1 || count==3){
                    return false;
                }
                    count=2;
                }
            }
            for(int j=0;j<str3.size();j++){
                
                if(s[i]==str3[j]){
                    if(count==1 || count==2){
                    return false;
                }
                    count=3;
                }
            }
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(string s:words){
            if(found(s)){
                ans.push_back(s);
            }
        }
        return ans;
    }
};
