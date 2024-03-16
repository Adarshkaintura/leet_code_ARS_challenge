/* You are given an array of integers 'ARR' of length 'N' and an integer Target. Your task is to return all pairs of elements such that they add up to Target.

Note:

We cannot use the element at a given index twice.

Follow Up:

Try to do this problem in O(N) time complexity. 

*/

#include <bits/stdc++.h>


vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	  unordered_map<int, int> map;
   vector<pair<int,int>> result;

    for (int num : arr) {
        int complement = target - num;
        if (map[complement] > 0) {
            result.push_back({complement, num});
            map[complement]--;
        } else {
            map[num]++;
        }
    }
 if(result.empty()){
        result.push_back({-1, -1});
 }
    return result;
}
