#include <bits/stdc++.h> 
#include<unordered_map>
#include<stack>
#include<list>
void dfs(vector<bool> &visited,unordered_map<int,list<int>> &adj,int i,stack<int> &s){
    visited[i]=true;
    for(auto neighbour:adj[i]){
        if(!visited[neighbour]){
            dfs(visited,adj,neighbour,s);
        }
    }
    //imp
    s.push(i);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
    }
    //call dfs topological sort util function for all components
 vector<bool>visited(v);
 stack<int> s;
for(int i=0;i<v;i++){
    if(!visited[i]){
        dfs(visited,adj,i,s);
    }
}
vector<int> ans;
while(!s.empty()){
    ans.push_back(s.top());
    s.pop();
}
return ans;
}
