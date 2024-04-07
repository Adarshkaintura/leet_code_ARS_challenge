class Solution {
public:
    bool checkValidString(string s) {
        stack<int> left_paren, star;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                left_paren.push(i);
            } else if (s[i] == '*') {
                star.push(i);
            } else { // s[i] == ')'
                if (!left_paren.empty()) {
                    left_paren.pop();
                } else if (!star.empty()) {
                    star.pop();
                } else {
                    return false;
                }
            }
        }

        while (!left_paren.empty() && !star.empty()) {
            if(left_paren.top()<star.top()){
                  left_paren.pop();
                star.pop();
            }else{
                break;
            }
              
        }

        return left_paren.empty();
    }
};
