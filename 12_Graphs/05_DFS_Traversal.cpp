#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {

    // Mark current node as visited
    visited[node] = true;

    cout << node << " ";

    // Visit all unvisited neighbours
    for (int i = 0; i < adj.size(); i++) {

        if (adj[node][i] == 1 && !visited[i]) {
            dfs(i, adj, visited);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n, vector<int>(n, 0));

    // Build undirected graph
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    int start;
    cin >> start;

    vector<bool> visited(n, false);

    dfs(start, adj, visited);

    cout << "\n";

    return 0;
}