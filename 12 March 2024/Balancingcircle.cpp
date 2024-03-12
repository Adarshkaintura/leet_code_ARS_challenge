#include<iostream>
#include<string>
#include<vector>
#include<limits.h>
#include<map>
#include<algorithm>
using namespace std;
int outputans(vector<int> nums,int n){
      map<int, int> m;
    int prev = INT_MAX;
    for (auto &i : nums)
    {
        m[i]++;
        prev = min(prev, i);
    }
    int res = 1, k = 0;
    for (auto &i : m)
    {
        if (i.first - prev < 2)
            k += i.second;
        else 
        {
            res = max(res, k);
            k = i.second;
        }
        if (i.second == 1)
        {
            res = max(res, k);
            k = i.second;
        }
        prev = i.first;
    }
    res = max(res, k);
return res;
}
int main(){
    vector<int> arr;
    cout<<"Enter the size:";
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }

     a=outputans(arr,n);
    cout<<a;
    return 0;
}
