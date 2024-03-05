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
