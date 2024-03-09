//optimum
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        const int MOD=1000000007;
        long long prefix=1;
        long long suffix=1;
        for(int i=0;i<nums.size();i++){
          ans[i]=prefix;
          prefix =(prefix*nums[i])%MOD;
        }
        for(int j=nums.size()-1;j>=0;j--){
            ans[j]=(ans[j]*suffix)%MOD;
            suffix=(nums[j]*suffix)%MOD;
        }
        return ans;
    }
};
