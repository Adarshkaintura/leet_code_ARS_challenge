class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> ans;
        int i=0;
        while( i<nums.size()){
            
                  if(ans.find(nums[i])!=ans.end()){
                      if(abs(ans[nums[i]]-i) <=k){
                          return true;
                      }
                  }
                  ans[nums[i]]=i;
                  i++;
            }
        return false;
    }
};
