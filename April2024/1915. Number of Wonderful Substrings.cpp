//brute
class Solution {
public:
    bool wonderful(string s) {
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        int count = 0;
        for(auto& a : mp) {
            if(a.second % 2 != 0) {
                count++;
                if(count > 1) {
                    return false;
                }
            }
        }
        return true;
    }
    
    long long wonderfulSubstrings(string word) {
        long long count = 0;
        for(int i = 0; i < word.size(); i++) {
            for(int j = i + 1; j <= word.size(); j++) {
                if(wonderful(word.substr(i, j - i))) {
                    count++;
                }
            }
        }
        return count;
    }
};
