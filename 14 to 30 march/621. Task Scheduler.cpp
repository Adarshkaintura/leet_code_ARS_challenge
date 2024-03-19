class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26);
        for(auto& i:tasks){
            freq[i-'A']++;
        }
     priority_queue<int> pq;
     for(int i=0;i<26;i++){
        if(freq[i]>0){
            pq.push(freq[i]);
        }
     }
     int time=0;
     while(!pq.empty()){
        vector<int> temp;
        for(int i=1;i<=n+1;i++){
            if(!pq.empty()){
            int f=pq.top();
            f--;
            pq.pop();
              temp.push_back(f);
            }
        }
      
         for(auto& i:temp){
            if(i>0){
               pq.push(i);
            }
            
        }
        
        
        if(!pq.empty()){
            time+=n+1;
        }else{
            time+=temp.size();
        }
     }
     return time;
    }
};
