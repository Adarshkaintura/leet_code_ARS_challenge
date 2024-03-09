//brute force
int *getProductArrayExceptSelf(int *arr, int n)
{
    const int MOD = 1000000007;
    int a=1;
    int* ans=new int[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                a=(a*arr[j])%MOD;
            }  
            
        }
         ans[i]=a;
         a=1;
    }
    return ans;
}
//optimum approach
int* getProductArrayExceptSelf(int* arr, int n) {
    const int MOD = 1000000007; 
    int* result = new int[n]; 

    // Calculate the prefix products
    int prefixProduct = 1;
    for (int i = 0; i < n; i++) {
        result[i] = prefixProduct;
        prefixProduct = (prefixProduct * arr[i]) % MOD; 
    }

    int suffixProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] = (result[i] * suffixProduct) % MOD; 
        suffixProduct = (suffixProduct * arr[i]) % MOD; 
    }

    return result;
}
