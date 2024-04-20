  vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       unordered_set<int> mp;
       for(int i=0;i<n;i++){
           mp.insert(arr1[i]);
       }
       for(int i=0;i<m;i++){
           mp.insert(arr2[i]);
       }
      vector<int> ans(mp.begin(),mp.end());
      sort(ans.begin(),ans.end());
      return ans;
    }
