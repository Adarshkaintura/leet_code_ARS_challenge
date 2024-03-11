//space in O(n);
int countPairs(vector<vector<int>>& mat1, vector<vector<int>>& mat2, int n,int x) {
    int count = 0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mp[mat1[i][j]]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a=x-mat2[i][j];
            if(mp.find(a)!=mp.end()){
             count++;   
            }
        }
    }

    return count;
}
//for space O(1);
int countPairs(vector<vector<int>>& mat1, vector<vector<int>>& mat2, int n,int x) {
    int count = 0;
    int i=0;
    int j=0;
    int l=n-1;
    int k=n-1;
    while(i<n && k>=0){
        int sum_ab=mat1[i][j]+mat2[k][l];
        if(sum_ab==x){
            count++;
            j++;
            l--;
        }else if(sum_ab<x){
            j++;
        }else{
            l--;
            
        }
        if(j==n){
            j=0;
            i++;
        }
        if(l<0){
            l=n-1;
            k--;
        }
    }
    return count;
}
