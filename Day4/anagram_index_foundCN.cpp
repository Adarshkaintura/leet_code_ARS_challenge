//its time limit is exceeded overall the approach is correct but is consuminga lot of time
#include <bits/stdc++.h> 
bool checkAnagram(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        return true;
    }
    return false;
}
vector<int> findAnagramsIndices(string str, string ptn, int n, int m)
{
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(checkAnagram(str.substr(i,m),ptn)){
            ans.push_back(i);
        }
    }
    return ans;
}
//another approach but is still didn't work out,its time limit also exceeded.
#include <bits/stdc++.h> 
bool checkAnagram(string s1, string s2) {
    unordered_map<char, int> mp;

    for(int i = 0; i < s1.size(); i++) {
        mp[s1[i]]++;
    }

    for(int i = 0; i < s2.size(); i++) {
        mp[s2[i]]--;
    }

    for(auto& p : mp) {
        if(p.second != 0) {
            return false;
        }
    }

    return true; 
}


vector<int> findAnagramsIndices(string str, string ptn, int n, int m) {
    vector<int> ans;
    for (int i = 0; i <= n - m; ++i) { 
        if (checkAnagram(str.substr(i, m), ptn)) {
            ans.push_back(i);
        }
    }
    return ans;
}
