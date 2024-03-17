class Solution {
public:
 static bool cmp(const pair<int,int>& a ,const pair<int,int>& b){
    return a.second<b.second;
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    
int n=intervals.size();
    if(n==0){
        return 0;
    }
   vector<pair<int,int>> temp(n);
   int start,end;
   for(int i=0;i<n;i++){
     temp[i].first=intervals[i][0];
     temp[i].second=intervals[i][1];
   }
   sort(temp.begin(),temp.end(),cmp);
    int ans=0;
     end=temp[0].second;
    for(int i=1;i<n;i++){
        if(end>temp[i].first){
            ans++;

        }else{
           end=temp[i].second;
        }
    }
    return ans;
}
};
