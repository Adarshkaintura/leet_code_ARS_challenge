class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a=nums[0];
        for(int i=1;i<nums.size();i++){
            a^=nums[i];
        }
        if(a==k){
            return 0;
        }
        int count=0;
        a^=k;
        while(a){
            int c=a%2;
            count+=c;
            a/=2;
        }
        return count;
    }
};
