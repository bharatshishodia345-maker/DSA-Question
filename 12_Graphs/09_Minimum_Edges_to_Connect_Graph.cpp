#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;

    for (int neighbour : adj[node]) {
        if (!visited[neighbour]) {
            dfs(neighbour, adj, visited);
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n);
    int m = 0;

    while (true) {
        int u;
        cin >> u;

        if (u == -1) {
            break;
        }

        int v;
        cin >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

        m++;
    }

    // A connected graph requires at least n-1 edges
    if (m < n - 1) {
        cout << -1 << endl;
        return 0;
    }

    vector<bool> visited(n, false);
    int components = 0;

    // Count connected components
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            components++;
            dfs(i, adj, visited);
        }
    }

    cout << components - 1 << endl;

    return 0;
}