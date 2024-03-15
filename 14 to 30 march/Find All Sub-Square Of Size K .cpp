//brute force you need to do the optimum again becuse its not coming answer
vector<vector<int>> sumOfKxKMatrices(vector<vector<int>> &arr, int k){
   vector<vector<int>> ans(arr.size()-k+1,vector<int>(arr.size()-k+1));
  if(k>arr.size()){
    return {};
  }
   for(int i=0;i<=arr.size();++i){
       for(int j=0;j<=arr.size();++j){
            
            if(i+k<=arr.size() && j+k<=arr.size()){
                int sum=0;
           for(int l=i;l<i+k;++l){
             for (int m = j; m < j + k; ++m) {
               sum += arr[l][m];
             }
           }
             ans[i][j]=sum;
            }
         
       }
   }
   return ans;
}
//optimum
