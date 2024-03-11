class Solution{
    public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mp;
  
        for (char c : order) {
            mp[c] = 0;
        }
        
        for (char c : s) {
            if (mp.find(c) != mp.end()) {
                mp[c]++;
            }
        }
        
        string ans;
        for (char c : order) {
            ans.append(mp[c], c);
        }
        
        for (char c : s) {
            if (mp.find(c) == mp.end()) {
                ans += c;
            }
        }
        
        return ans;
    }
};
