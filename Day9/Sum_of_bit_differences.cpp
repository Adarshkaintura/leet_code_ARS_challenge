//optimum
long long sumBitDifferences(int arr[], int n) {
	    long long ans=0;
	    for(int i=0;i<32;i++){
	        long long count=0;
	        for(int j=0;j<n;j++){
                  if(arr[j] & (1<<i)){
                      count++;
                  }
	        }
	        ans+=(count*(n-count)*2);
	    }
	  return ans;
	}

//Brute force 
int cortocount(int a){
        int count=0;
        while(a){
            a &=(a-1);
            count++;
        }
        return count;
    }
	long long sumBitDifferences(int arr[], int n) {
	    long long count=0;
	  for(int i=0;i<n;i++){
	      for(int j=0;j<n;j++){
	          int a=arr[i]^arr[j];
	          count+=xortocount(a);
	      }
	  }
	  return count;
	}
