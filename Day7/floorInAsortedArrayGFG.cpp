int findFloor(vector<long long> v, long long n, long long x){
        int a=-1;
        int l=0;
        int h=n-1;
       while(l<=h){
            int mid=(l+h)/2;
            if(v[mid]<=x){
                 a=mid;
                 l=mid+1;
                }
            else{
                h=mid-1;
            }
        }
        return a;
    }
