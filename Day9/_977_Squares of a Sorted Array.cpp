class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //optimal approach
          int n=nums.size();
       vector<int> ans(n);
       int i=0,j=nums.size()-1;
     
       for(int k=n-1;k>=0;k--){
          int sq1=nums[i]*nums[i];
          int sq2=nums[j]*nums[j];
          if(sq1>sq2){
          ans[k]=sq1;
          i++;
          }else{
              ans[k]=sq2;
                j--;
          }
       }
       return ans;
    }
};
