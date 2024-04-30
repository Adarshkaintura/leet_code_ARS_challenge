#include <bits/stdc++.h> 
vector <int> chuninNinja(int n , int m , vector < vector < int > > arr){
  
 vector<int> ans;
  for(int i=0;i<n;i++){
   
     for(int j=0;j<m;j++){
          int maxi=arr[i][j];
          bool maxit=true;
          bool minit=true;
          for(int k=0;k<n;k++){
             if(maxi<arr[k][j]){
                 maxit=false;
                 break;
             }
          }
         int mini=maxi;
         for(int k=0;k<m;k++){
            if(mini>arr[i][k]){
               minit=false;
               break;
            }
         }
         if(maxit && minit){
              ans.push_back(mini);
         }
        
        }
     }
 
  return ans;
}
