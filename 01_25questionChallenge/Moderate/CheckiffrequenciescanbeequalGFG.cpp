// Given a string s which contains only lower alphabetic characters, check if it is possible to remove at most one character from this string in such a way that frequency of each distinct character becomes same in the string. Return true if it is possible to do else return false.

// Note: The driver code print 1 if the value returned is true, otherwise 0.

// Example 1:

// Input:
// s = "xyyz"
// Output: 
// 1 
// Explanation: 
// Removing one 'y' will make frequency of each character to be 1.
	bool sameFreq(string s)
	{
	   unordered_map<char,int> mp;
	   char maxch;
	   int maxi=0;
	   for(int i=0;i<s.size();i++){
	       mp[s[i]]++;
	       if(mp[s[i]]>maxi){
	           maxi=mp[s[i]];
	           maxch=s[i];
	       }
	   }
	   int count=0;
	   int a=mp[s[0]];
	   for(auto& it:mp){
	       if(it.second==a){
	           count++;
	       }
	   }
	   if(count==mp.size()){
	       return true;
	   }
	   a=--mp[maxch];
	   for(auto& it:mp){
	       if(it.second!=a){
	           return false;
	       }
	   }
	   return true;
	}
