 int ways(int x, int y)
    {
               int mod=1000000007;
       vector<vector<long long>> dp( x+1 , vector<long long> (y+1));
       for(int i=0;i<=x;i++){
           dp[i][0]=1;
       }
       for(int i=0;i<=y;i++){
           dp[0][i]=1;
       }
       for(int i=1;i<=x;i++){
           for(int j=1;j<=y;j++){
               dp[i][j]=(dp[i-1][j]+dp[i][j-1]) % mod;
           }
       }

       return dp[x][y] ;
    }
