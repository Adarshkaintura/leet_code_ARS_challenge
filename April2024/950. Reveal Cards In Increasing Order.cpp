class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> result(deck.size(),0);
        bool skip=false;
        int i=0,j=0;
        while(i<deck.size()){
            if(result[j]==0){
                if(skip==false){
                    result[j]=deck[i++];
                   
                }
                  skip=!skip;
            
            }
            j=(j+1)%deck.size();
            
        }
        return result;
    }
};
