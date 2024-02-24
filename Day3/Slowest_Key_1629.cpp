class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int time=releaseTimes[0];
            char ch=keysPressed[0];
        for(int i=1;i<releaseTimes.size();i++){
              int temp=releaseTimes[i]-releaseTimes[i-1];
              if(time<temp||(time==temp && keysPressed[i]>ch)){
                  time=temp;
                    ch=keysPressed[i];
              }  
        }
       return ch;
    }
};
