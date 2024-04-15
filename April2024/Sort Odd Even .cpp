#include <bits/stdc++.h> 
void sortOddEven(vector<int>& nums){
    sort(nums.begin(),nums.end());
    vector<int>odd;
    vector<int>even;
    for(auto num:nums){
        if(num%2==0){
            even.push_back(num);
        }else{
            odd.push_back(num);
        }
    }
    reverse(odd.begin(),odd.end());
    int i=0;
    for(auto num: odd){
      nums[i++]=num;
    }
    for(auto num: even){
        nums[i++]=num;
    }
}
