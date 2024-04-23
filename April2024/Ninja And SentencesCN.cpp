#include <bits/stdc++.h> 
void createSentencesHelper(vector<vector<string>>& arr,vector<vector<string>>& ans,vector<string>&current,int rowindex){
   int row=arr.size();
   if(row==rowindex){
       ans.push_back(current);
       return;
   }
   for(auto& sentence:arr[rowindex]){
       current.push_back(sentence);
       createSentencesHelper(arr,ans, current, rowindex+1);
       current.pop_back();
   }
}
void createSentences(vector < vector < string > > & arr, vector < vector < string > > & ans) {
    vector<string>current;
    createSentencesHelper(arr,ans,current,0);
}
