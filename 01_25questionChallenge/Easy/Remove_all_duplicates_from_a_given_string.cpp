	string removeDuplicates(string str) {
	    unordered_map<char,int>mp;
	    for(int i=0;i<str.size();i++){
	        if(mp[str[i]]<1){
	            mp[str[i]]++;
	        }
	    }
	    string ans="";
	    for(int i=0;i<str.size();i++){
	        if(mp[str[i]]==1){
	            ans+=str[i];
	            mp[str[i]]--;
	        }
	        
	    }
	    return ans;
	}
