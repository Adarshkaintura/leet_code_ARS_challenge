 int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxi){
                maxi=mp[nums[i]];
            }
        }
int ans=0;
        for(auto& it:mp){
            if(it.second==maxi){
               ans+=maxi;
            }
        }
        return ans;
    }
