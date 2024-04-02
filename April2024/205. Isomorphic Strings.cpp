//brute
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> mp,sp;
        if(s.size()!=t.size()){
            return false;
        }
        mp[s[0]]++;
             sp[t[0]]++;
        for(int i=1;i<s.size();i++){
             mp[s[i]]++;
             sp[t[i]]++;
             if(mp[s[i]]!=sp[t[i]]){
                return false;
             }
             if(mp[s[i-1]]!=sp[t[i-1]]){
                return false;
             }
             
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]!=sp[t[i]]){
                return false;
            }
        }

        return true;
    }
};
//optimized
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;
        unordered_map<char, char> map_chars;
        unordered_set<char> set_vals;
        for (int i = 0; i < s.length(); ++i) {
            if (map_chars.find(s[i]) != map_chars.end()) {
                if (map_chars[s[i]] != t[i])
                    return false;
            } else {
                if (set_vals.find(t[i]) != set_vals.end())
                    return false;
                map_chars[s[i]] = t[i];
                set_vals.insert(t[i]);
            }
        }
        return true;
    }
};
