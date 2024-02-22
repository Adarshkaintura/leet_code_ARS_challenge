//brute force type here i restored the data
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
//here i didn't restores the data as it is not asked from the question so the optimised approach is this 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int k=0;

        while(i<nums.size()){
            if(nums[i]!=val){
               nums[k++]=nums[i];
            }
            i++;
        }
        return k;
    }
};
