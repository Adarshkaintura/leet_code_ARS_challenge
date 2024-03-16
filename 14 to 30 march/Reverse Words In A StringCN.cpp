/* You are given a string 'str' of length 'N'.


Your task is to reverse the original string word by word.


There can be multiple spaces between two words and there can be leading or trailing spaces but in the output reversed string you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.


Example :

If the given input string is "Welcome to Coding Ninjas", then you should return "Ninjas Coding to Welcome" as the reversed string has only a single space between two words and there is no leading or trailing space.

*/
//this is taking n time complexity and n space complexity bad approach you need to do bettwe in O(1) space and in place 
#include<iostream>
#include<vector>
#include<algorithm>
void pop_front(vector<int>& vec) {
    if (!vec.empty()) {
        vec.erase(vec.begin());
    }
}
string reverseString(string &str){
   vector<string> temp;
   string s;
   for(int i=0;i<str.size();i++){
	   if(str[i]!=' '){
          s+=str[i];
	   }
	   else if(str[i]==' '){
		   if(!s.empty()){
             temp.push_back(s);
		    s="";
		   }
		  
	   }

   }
temp.push_back(s);
   s="";
  reverse(temp.begin(),temp.end());

  for(auto s1:temp){
	  s+=s1;
	  s+=" ";
  }
   if (!s.empty()) {
        s.pop_back();
    }
	if(s[0]==' '){
		s=s.substr(1);
	}
    return s;
}
