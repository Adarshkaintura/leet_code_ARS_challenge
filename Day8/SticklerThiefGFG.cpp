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
