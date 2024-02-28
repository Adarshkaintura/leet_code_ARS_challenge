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
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      int res=0;
      for(int i=0;i<nums.size()-1;i++){
          if(nums[i]<nums[i+1]){
              if(res==0) res=1;
              else if(res==-1)return false;
          }else if(nums[i]>nums[i+1]){
              if(res==0)res=-1;
              else if(res==1) return false;
          }
      }
      return true;
    }
};
