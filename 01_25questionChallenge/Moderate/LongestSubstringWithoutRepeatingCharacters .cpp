//sliding window approach
int uniqueSubstrings(string input) {
    unordered_map<char, int> freq;
    int start = 0;
    int maxLen = 0;

    for (int end = 0; end < input.size(); end++) {
        char currentChar = input[end];
        freq[currentChar]++;

        while (freq[currentChar] > 1) {
            char leftChar = input[start];
            freq[leftChar]--;
            start++;
        }

        maxLen = max(maxLen, end - start + 1);
    }

    return maxLen - 1; 
}
//the below code didn't work i dont know why its not working even though the logic is correct 
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
//below is also a good code but also failed in some test cases 
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int ans=0;
    int temp=0;
    unordered_map<char,int> mp;
    for(int i=0;i<input.size();i++){
        mp[input[i]]++;
        if(mp[input[i]]==1){
            temp++;
        }else{
            ans=max(ans,temp);
            temp=1;
            mp.clear();
            mp[input[i]]++;

        }
    }
    ans=max(ans,temp);
    return ans;
}
