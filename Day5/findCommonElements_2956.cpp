class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int>s2;
        int c1=0;
        int c2=0;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(int num:nums2){
            if(s1.find(num)!=s1.end()){
               c1++;
            }
        }
        for(int num:nums1){
            if(s2.find(num)!=s2.end()){
               c2++;
            }
        }
       return {c2,c1}; 
    }
};
