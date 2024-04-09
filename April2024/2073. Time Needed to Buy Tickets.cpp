class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        queue<pair<int,int>> tick;
        for(int i=0;i<tickets.size();i++){
            tick.push({i,tickets[i]});
        }
        while(!tick.empty()){
             auto person = tick.front();
        tick.pop();
         if (person.second-1 > 0) {
            tick.push({person.first, person.second - 1});
        }
        if (person.first == k && person.second-1 == 0) {
            return time+1;
        }
        time++;
        }
        return -1;
    }
};
