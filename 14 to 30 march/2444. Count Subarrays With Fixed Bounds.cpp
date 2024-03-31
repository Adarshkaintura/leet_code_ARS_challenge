class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int minin=-1;
        int maxin=-1;
        int cult=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK|| nums[i]>maxK){
                cult=i;
            }
            if(nums[i]==minK){
              minin=i;
            }
             if(nums[i]==maxK){
                maxin=i;
            }
            long long smaller = min(minin,maxin);
            long long temp=smaller-cult;
            ans+=(temp<=0)?0:temp;
        }
        return ans;
    }
};
