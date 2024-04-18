 vector<int> twoRepeated (int arr[], int n) {
            vector<int> ans;
        for(int i=0;i<n+2;i++){
            int a=abs(arr[i]);
            a-=1;
               if(arr[a]>0){
                   arr[a]=-arr[a];
               }else{
                   ans.push_back(abs(arr[i]));
               }
        }
    
        return ans;
    }
