#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj,
         vector<bool>& visited, vector<int>& compo) {

    visited[node] = true;
    compo.push_back(node);

    for (int i = 0; i < adj.size(); i++) {
        if (adj[node][i] == 1 && !visited[i]) {
            dfs(i, adj, visited, compo);
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

    vector<bool> visited(n, false);

    // Find all connected components
    for (int i = 0; i < n; i++) {

        if (!visited[i]) {
            vector<int> compo;

            dfs(i, adj, visited, compo);

            sort(compo.begin(), compo.end());

            for (int v : compo) {
                cout << v << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}