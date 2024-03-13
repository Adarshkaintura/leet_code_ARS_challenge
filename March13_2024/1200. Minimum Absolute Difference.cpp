class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int mini=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
           int temp=arr[i]-arr[i-1];
           mini=min(temp,mini);
        }
        for(int i=1;i<arr.size();i++){
            if((arr[i]-arr[i-1])==mini){
                 ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};
