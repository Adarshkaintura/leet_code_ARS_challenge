  public:
    vector<int> Series(int n) {
    vector<int> ans;
    if (n <= 0) {
        return ans; 
    }

    int a = 0;
    int b = 1;
    ans.push_back(0);
    ans.push_back(1);
    int mod=1e9+7;

    for (int i = 2; i <= n; i++) {
         int c = a + b;
         c=c%mod;
        ans.push_back(c);
       
        a = b;
        b = c;
    }

    return ans;
}
