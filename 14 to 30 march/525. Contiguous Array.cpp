 int findMaxLength(std::vector<int>& nums) {
        unordered_map<int, int> countMap;
        int countZero = 0;
        int countOne = 0;
        int maxLength = 0;
        countMap[0] = -1; 
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                countZero++;
            } else {
                countOne++;
            }
            
            int diff = countZero - countOne;
            if (countMap.find(diff) != countMap.end()) {
                maxLength = max(maxLength, i - countMap[diff]);
            } else {
                countMap[diff] = i;
            }
        }
        
        return maxLength;
    }
