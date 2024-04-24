class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n=matrix.size();
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(matrix[i][j]==-1){
	                matrix[i][j]=100000;
	            }
	        }
	    }
	    for(int via=0;via<matrix.size();via++){
	        for(int i=0;i<matrix.size();i++){
	            for(int j=0;j<matrix.size();j++){
	                matrix[i][j]=min(matrix[i][j],matrix[i][via]+matrix[via][j]);
	            }
	        }
	    }
	     for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(matrix[i][j]==100000){
	                matrix[i][j]=-1;
	            }
	        }
	    }
	}
};
