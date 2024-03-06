#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    vector<int> tp(input.size());
    
    unordered_map<char,int> mp;
    for(int i=0;i<input.size();i++){
        tp[i]=mp[input[i]]++;
    }
    int temp=1;
    int ans=1;
    for(int i =1;i<input.size();i++){
        if(tp[i]==tp[i-1]){
               temp++;
        }else{
             ans=max(temp,ans);
             temp=1;
        }
    }
    ans = max(temp, ans);
    return ans;
}
