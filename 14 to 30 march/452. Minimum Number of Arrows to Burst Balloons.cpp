class Solution {
public:

   int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty()) {
            return 0;
        }
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0]; // Sort intervals based on starting points
        });
        int arrow=1;
       int end=points[0][1];
       for(int i=1;i<points.size();i++){
             if(end>=points[i][0]){
                end=min(end,points[i][1]);
             }else{
                arrow++;
                end=points[i][1];
             }
       }
        return arrow;
    }
};
