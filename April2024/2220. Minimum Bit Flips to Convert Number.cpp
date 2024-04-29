class Solution {
public:
    int minBitFlips(int start, int goal) {
      start^=goal;
      int count=0;
      while(start){
        int a=start%2;
        count+=a;
        start/=2;
      }  
      return count;
    }
};
