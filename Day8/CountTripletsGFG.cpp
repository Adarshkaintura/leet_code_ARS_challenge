	long long countTriplets(long long arr[], int n, long long sum)
	{
	   long long res=0;
	   sort(arr,arr+n);
	   for(int i=0;i<n-2;i++){
	       int j=i+1;
	       int k=n-1;
	       while(j<k){
	           long long s=arr[i]+arr[j]+arr[k];
	           if(s>=sum){
	               k--;
	           }else{
	               res+=(k-j);
	               j++;
	           }
	       }
	   }
	   return res;
	}
		 
