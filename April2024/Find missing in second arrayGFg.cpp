	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    unordered_map<int,int> mp;
	    for(int i=0;i<m;i++){
	        mp[b[i]]=1;
	    }
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(mp.find(a[i])==mp.end()){
	         ans.push_back(a[i]); 
	        }
	    }
	    return ans;
	} 
