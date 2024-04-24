#include <bits/stdc++.h> 
int fishEater(vector<int> &fishes) {
   stack<int> s;
   s.push(fishes[0]);
   for(int i=1;i<fishes.size();i++){
     if (s.top() <= fishes[i]) {
       s.push(fishes[i]);
     }
     
   }
   return s.size();
}
