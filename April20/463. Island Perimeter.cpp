class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
int parameter=0;
        for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
            if(grid[i][j]==1){
                int a=4;
                // if(&&  && ){
                    
                    if(j-1>=0 && grid[i][j-1]!=0 ){
                         a-=1;
                    }
                    if(j+1<col && grid[i][j+1]!=0 ){
                          a-=1;
                    }
                    if( i-1>=0 && grid[i-1][j]!=0  ){
                          a-=1;
                    }
                    if(i+1<row && grid[i+1][j]!=0 ){
                           a-=1;
                    }
                // }
                parameter+=a;
            }
              
           }
        }
        return parameter;
    }
};
