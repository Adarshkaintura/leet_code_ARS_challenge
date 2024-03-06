#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	string ans="";
	string rep="@40";
	for(int i=0;i<str.size();i++){
		if(str[i]==' '){
          ans+=rep;
		}else{
			ans+=str[i];
		}
		
	}
	return ans;
}
