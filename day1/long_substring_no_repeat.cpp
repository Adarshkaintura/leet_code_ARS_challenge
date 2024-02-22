//brute force where time limit is exceeded
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                if (allUnique(s, i, j)) {
                    ans = max(ans, j - i);
                }
            }
        }
        return ans;
    }

private:
    bool allUnique(string s, int start, int end) {
        unordered_set<char> seen;
        for (int i = start; i < end; ++i) {
            if (seen.find(s[i]) != seen.end()) {
                return false;
            }
            seen.insert(s[i]);
        }
        return true;
    }
};
//AND THIS IS THE BETTWE APPROACH OF O(n) time complexity

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int> mp;
       int l=0,r=0;
       int ans=0;
       int len=0;
       while(r<s.size()){
           if(mp.find(s[r]) == mp.end() || mp[s[r]] < l) {
               mp[s[r]] = r;
               len++;
           } else {
             l = mp[s[r]] + 1;
             mp[s[r]] = r;
             ans = max(ans, len);
             len = r - l + 1;
           }
           ans = max(ans, len);
           r++;
       }
        return ans;
    }
};
