class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,h=nums.size()-1;
         int len=0;
         int i=0;
         while(i<nums.size()){
              if(nums[i]!=val){
                 len++;
             }
             i++;
         }
         while(l<h){
            
             if(nums[h]==val){
                h--;
             }
             if(nums[l]==val){
                 swap(nums[l],nums[h]);
                 h--;
             }else{
                l++;
             }
         }
        return len;
    }
};
