class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stuo;
        stack<int> sand;
        for(int i=0;i<students.size();i++){
            stuo.push(students[i]);
        }
        for(int i=sandwiches.size()-1;i>=0;i--){
            sand.push(sandwiches[i]);
        }
    int stuzero = 0, stuone = 0, sandzero = 0, sandone = 0;

        for (int i = 0; i < students.size(); ++i) {
            if (students[i] == 0) {
                stuzero++;
            } else {
                stuone++;
            }
            if (sandwiches[i] == 0) {
                sandzero++;
            } else {
                sandone++;
            }
        }

        while (!stuo.empty()) {
            int temp = stuo.front();
            int temp2 = sand.top();
            if (temp == temp2) {
                stuo.pop();
                sand.pop();
                if (temp == 1) {
                    stuone--;
                    sandone--;
                } else {
                    stuzero--;
                    sandzero--;
                }
            } else {
                stuo.pop();
                stuo.push(temp);
                if (stuone == stuo.size() || stuzero == stuo.size()) {
                    if (stuone != sandone || stuzero != sandzero) {
                        return stuo.size();
                    }
                }
            }
        }
        return 0;
    }
};
