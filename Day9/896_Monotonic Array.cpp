//a brute
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      int flag=1;
      for(int i=1;i<nums.size();i++){
          if(nums[i-1]>nums[i]){
              flag=0;
              break;
          }
      }  
      if(!flag){
          for(int i=1;i<nums.size();i++){
                if(nums[i-1]<nums[i]){
                    return false;
                }
          }
      }
      return true;
    }
};
//optimized
