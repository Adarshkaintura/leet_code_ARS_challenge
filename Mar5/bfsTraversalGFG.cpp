/* Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
Note: One can move from node u to node v only if there's an edge from u to v. Find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the input graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.*/
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       int vis[V]={0};
       vis[0]=1;//given 0 is visited
       queue<int> q;
       q.push(0);
       vector<int> bfs;
       while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            
            for(auto it:adj[node]){
            if(!vis[it])
                {
                      vis[it]=1;
                    q.push(it);
            }
            }
       }
       return bfs;
    }
};
