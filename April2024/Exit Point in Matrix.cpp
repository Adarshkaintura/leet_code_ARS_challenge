 vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        
       int i=0,j=0;
       int dir=1;
       while(i>=0 && i<n && j>=0 && j<m){
           if(matrix[i][j]==1){
               matrix[i][j]=0;
               dir=(dir%4)+1;
           }
           if(dir==1){
               j++;
           }else if(dir==2){
               i++;
           }else if(dir==3){
               j--;
           }else{
               i--;
           }
       }
      if(dir==1){
               j--;
           }else if(dir==2){
               i--;
           }else if(dir==3){
               j++;
           }else{
               i++;
           } 
           vector<int> ans;
           ans.push_back(i);
           ans.push_back(j);
           return ans;
    }
