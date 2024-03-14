#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>

using namespace std;

vector<int> sample(vector<vector<int>>& edges, int v, int e) {
    unordered_map<int, list<int>> adj;

    // Iterate through each edge and build the adjacency list
    for (int i = 0; i < e; i++) {
        int u = edges[i][0]; // Source vertex
        int v = edges[i][1]; // Destination vertex

        // Add the destination vertex to the adjacency list of the source vertex
        adj[u].push_back(v);
    }

    // Print the adjacency list for demonstration
    for (auto& kvp : adj) {
        cout << kvp.first << ": ";
        for (int neighbor : kvp.second) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    // Return the adjacency list (not necessary for this demonstration)
    // Here, you can perform any further operations with the adjacency list
}

int main() {
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<vector<int>> edges(e, vector<int>(2));

    cout << "Enter the edges (format: source destination):" << endl;
    for (int i = 0; i < e; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    sample(edges, v, e);
    return 0;
}
