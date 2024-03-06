class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=0;
        while(i<j){
            int length=min(height[i],height[j]);
            ans=max(ans,length*(j-i));
            if(height[i]<height[j]){
                i++;
            }else if(height[j]<height[i]){
                j--;
            }else{
                i++;
                j--;
            }
        }
        return ans;
    }
};
