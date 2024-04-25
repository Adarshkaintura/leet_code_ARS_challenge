class Solution {
public:
    int longestIdealString(string s, int k) {
        int n=s.length();
        vector<int> t(26,0);
        int result=0;
        for(int i=0;i<n;i++){
            int ch=s[i]-'a';
            int left=max(0,ch-k);
            int right=min(25,ch+k);
            int longest=0;
            for(int j=left;j<=right;j++){
                  longest=max(longest,t[j]);
            }
            t[ch]=max(t[ch],longest+1);
            result=max(t[ch],result);
        }
        return result;
    }
};
