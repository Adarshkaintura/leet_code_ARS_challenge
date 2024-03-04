#include <bits/stdc++.h> 
int chartodigit(char c){
	if(isdigit(c)){
		return c-'0';
	}else if(isalpha(c)){
		return toupper(c)-'A'+10;
	}
	return -1;
}
int baseConversion(string &num, int base)
{
	int ans=0;
	int n=num.size();
	int i=n-1;
	int power=1;
      while(i>=0){
		  int digit=chartodigit(num[i]);
		  if(digit<0 || digit>=base){
			  return -1;
		  }
		  ans+=digit*power;
		  power*=base;
		  i--;
	  }
	  return ans;
}
