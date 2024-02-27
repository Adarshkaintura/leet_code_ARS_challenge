//dp, tc-O(n) space c-O(n);
int FindMaxSum(int arr[], int n)
    {
      if(n==0){
          return 0;
      }
      if(n==1){
          return arr[0];
      }
      if(n==2){
          return max(arr[0],arr[1]);
      }
      
      int b[n];
      b[0]=arr[0];
      b[1]=max(arr[0],arr[1]);
      for(int i=2;i<n;i++){
          b[i]=max(b[i-2]+arr[i],b[i-1]);
      }
      return b[n-1];
    }

//optimized approach is this with space coplexity O(1) but i still can't figure out how this is created what is the working or maths behind it
int FindMaxSum(vector<int> arr, int n)
{
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    int i;
 
    for (i = 1; i < n; i++) {
        // Current max excluding i
        excl_new = max(incl, excl);
 
        // Current max including i
        incl = excl + arr[i];
        excl = excl_new;
    }
 
    // Return max of incl and excl
    return max(incl, excl);
}
