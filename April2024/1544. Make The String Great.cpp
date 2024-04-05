class Solution {
public:
    string makeGood(string s) {
        string str;
        stack<char>s1;
        
       
        for (char ch:s) {
            if (!s1.empty() && abs(ch - s1.top()) == 32) {
                    s1.pop();   
            }else{
                 s1.push(ch);
            }
           
        }
        while(!s1.empty()){
            str=s1.top()+str;
            s1.pop();
           
        }
      
        return str;
    }
};
