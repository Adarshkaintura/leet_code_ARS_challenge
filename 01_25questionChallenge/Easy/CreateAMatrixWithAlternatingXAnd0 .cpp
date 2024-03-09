vector<vector<char>> constructMatrix(int n, int m)
{
    vector<vector<char>> ans(n,vector<char>(m,'0'));
    int top=0;
    int left=0;
    int right=m-1;
    int bottom=n-1;
    int l=1;
    while(left<=right && top<=bottom){
       for(int i=left;i<=right;i++){
           if(l){
               ans[top][i]='X';
           }else{
               ans[top][i]='0';
           }
             
       }
       top++;
       for(int i=top;i<=bottom;i++){
           if(l){
               ans[i][right]='X';
           }else{
               ans[i][right]='0';
           }
       }
       right--;
       if(top<=bottom){
           for(int i=right;i>=left;i--){
               if(l){
                   ans[bottom][i]='X';
               } else {
                   ans[bottom][i] = '0';
               }
           }

           bottom--;
       }
       if(left<=right){
       for(int i=bottom;i>=top;i--){
         if(l){
               ans[i][left]='X';
         } else {
               ans[i][left] = '0';
         }
       }
       left++;
       }
       l=!l;
    }
    return ans;
}
