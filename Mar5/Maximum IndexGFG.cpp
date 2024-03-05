/* Given an array a of n positive integers. The task is to find the maximum of j - i subjected to the constraint of a[i] < a[j] and i < j.
brute force */
 int maxIndexDiff(int a[], int n) 
    { 
        if (n <= 1)
        return 0; // or any meaningful value

    int maxdif = INT_MIN;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int temp=j-i;
                if(temp>maxdif && a[i]<=a[j]){
                    maxdif=temp;
                    
                }
            }
        }
        return maxdif;
    }

// optimized
 int maxIndexDiff(int arr[], int n) 
    { 
        if (n <= 1)
        return 0; // or any meaningful value

     vector<int> low(n,INT_MAX);
     vector<int> high(n,INT_MIN);
     int l=0;
     int h=n-1;
     low[l]=arr[l];
     int ans=0;
     high[h]=arr[h];
     for(int i=1;i<n;i++){
         low[i]=min(low[i-1],arr[i]);
     }
      for(int i=n-2;i>=0;--i){
         high[i]=max(high[i+1],arr[i]);
     }
     l=0;
     int r=0;
     while(l<n && r<n){
         if(low[l]<=high[r]){
              ans=max(ans,r-l);
              r++;
         }else{
             l++;
         }
     }
     return ans;
    }
};
