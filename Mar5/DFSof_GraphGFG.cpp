#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void helper(int a,int ver[],vector<int> adj[],vector<int> &ans){
    ver[a]=1;
    ans.push_back(a);
    for(auto it:adj[a]){
        if(ver[it]!=1){
            helper(it,ver,adj,ans);
        }
    }
}
 vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       int ver[V]={0};
       vector<int> ans;
        helper(0,ver,adj,ans);
        return ans;
    }
int main(){
    int n,m;
    cout<<"Enter the total number of node and edeges:";
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
for(int i = 1; i <= n; i++) {
    cout << "Adjacency list of node " << i << ": ";
    for(int j = 0; j < adj[i].size(); j++) {
        cout << adj[i][j] << " ";
    }
    cout << endl;
}
vector<int> ans=dfsOfGraph(n,adj);
    return 0;
}
