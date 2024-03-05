// Check If The String Is A Palindrome 
#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    string temp="";
    for(int i=0; i<s.size();i++){
           char ch=s[i];
           if(isalnum(ch)){
             if (isalpha(ch)) {
               ch=(char)tolower(ch);
             }
             temp += ch;
           }
    }
    int l=0,r=temp.size()-1;
    while(l<=r){
        if(temp[l]!=temp[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
    }
