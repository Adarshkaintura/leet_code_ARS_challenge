class Solution {
  public:
  void helper(int a, vector<int>& ver, vector<int> adjls[]) {
    ver[a] = 1;
    for (int it : adjls[a]) {
        if (ver[it] != 1) {
            helper(it, ver, adjls);
        }
    }
}

int numProvinces(vector<vector<int>> adj, int V) {
    vector<int> adjls[V];
    for(int i=0;i<V;i++){
        for(int j=i+1;j<V;j++){
            if(adj[i][j]==1){
               adjls[i].push_back(j);
               adjls[j].push_back(i);
            }
        }
    }
    vector<int> ver(V, 0);
    int ans = 0;
    for (int i = 0; i < V; i++) {
        if (ver[i] != 1) {
            ans++;
            helper(i, ver, adjls);
        }
    }
    
    return ans;
}
