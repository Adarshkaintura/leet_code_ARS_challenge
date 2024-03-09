//brute force TLE 
 char nthCharacter(string s, int r, int n) {
        string str="";
        for(int i=0;i<r;i++){
            for(int j=0;j<s.size();j++){

                    if(s[j]=='0'){
                    str+="01";
                }else{
                    str+="10";
                }
                
                
            }
            s=str;
            str="";
        }
        return s[n];
    }
//i just changed one thing and it work out 
char nthCharacter(string s, int r, int n) {
        string str="";
        for(int i=0;i<r;i++){
            for(int j=0;j<=n;j++){

                    if(s[j]=='0'){
                    str+="01";
                }else{
                    str+="10";
                }
                
                
            }
            s=str;
            str="";
        }
        return s[n];
    }
