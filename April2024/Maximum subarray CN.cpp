#include <bits/stdc++.h> 
vector<int> maximumsumSubarray(vector<int> &arr , int n)
{
    int maxi=INT_MIN;
    int idx=0;
    int edx=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>maxi){
                maxi=sum;
                idx=i;
                edx=j;
            }
        }
    }
    vector<int> ans(arr.begin()+idx,arr.begin()+1+edx);
    return ans;
}
//optimized by kadane's algo
#include <vector>
#include <climits>

using namespace std;

vector<int> maximumsumSubarray(vector<int> &arr, int n) {
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    int start = 0;
    int end = 0;
    int s = 0; // Start index of the current subarray

    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
            s = i + 1; // Update start index of the current subarray
        }
    }

    return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}
