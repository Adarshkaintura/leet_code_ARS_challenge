int minRow(int n, int m, vector<vector<int>> a) {
        int mini=0;
        int idx=0;
       for(int i=0;i<n;i++){
           int temp=0;
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                temp++;
            }
        } 
        if(mini<temp){
            mini=temp;
            idx=i;
        }
        temp=0;
       }
       return idx+1;
    }
