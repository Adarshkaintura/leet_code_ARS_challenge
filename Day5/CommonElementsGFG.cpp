//question is to find the common elements in the sorted 3 array
//brute froce is this 
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            set<int> ans;
            for(int i=0;i<n1;i++){
                for(int j=0;j<n2;j++){
                    if(A[i]==B[j]){
                        for(int k=0;k<n3;k++){
                            if(C[k]==A[i]){
                                ans.insert(A[i]);
                            }
                        }
                    }
                }
            }
            vector<int> ans1(ans.begin(),ans.end());
            return ans1;
        }
//a little better approach
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           set<int> arr;
           for(int i=0;i<n1;i++){
               for(int j=0;j<n2;j++){
                   if(A[i]==B[j]){
                       arr.insert(A[i]);
                   }
               }
           }
           set<int> ans;
           for(int i=0;i<n3;i++){
               if(arr.find(C[i])!=arr.end()){
                    ans.insert(C[i]);
               }
           }
           vector<int> res(ans.begin(),ans.end());
            return res;
        }
//best and optimum approach................
vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
           int i=0;
           int j=0;
           int k=0;
           set<int> ans;
           while(i<n1&& j<n2&& k<n3){
               if(a[i]==b[j]&&b[j]==c[k]){
                   ans.insert(a[i]);
                   i++;
                   j++;
                   k++;
               }else if(a[i]<b[j]){
                   i++;
               }else if(b[j]<c[k]){
                   j++;
               }else{
                   k++;
               }
              
           }
           vector<int> res(ans.begin(),ans.end());
           return res;
        }
