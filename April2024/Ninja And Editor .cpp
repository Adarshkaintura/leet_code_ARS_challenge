#include <bits/stdc++.h> 
string editSentence(string &str)
{
	string ans="";
ans+=tolower(str[0]);
    for(int i=1;i<str.length();i++){
    
        if(str[i]>='A'&& str[i]<='Z'){
            ans+=' ';
            ans+=tolower(str[i]);
        }else{
            ans+=str[i];
        }
    }
  
    return ans;
}
