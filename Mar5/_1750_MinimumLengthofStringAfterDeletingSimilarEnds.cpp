class Solution {
public:
    int minimumLength(string s) {
         int l=0;
         int r=s.size()-1;
         while(l<r && s[l]==s[r]){
              char ch=s[l];
              while(l<=r &&s[l]==ch){
                  l++;
              }
              while(r>=l&&s[r]==ch){
                  r--;
              }
         }
         if(r-l+1 < 0){
             return 0;
         }
         return r-l+1;
    }
};
