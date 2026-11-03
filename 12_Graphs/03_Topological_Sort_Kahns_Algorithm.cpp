#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n);

    // Build directed graph
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    // Calculate indegree
    vector<int> in(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j : adj[i]) {
            in[j]++;
        }
    }

    // Min heap: smallest node gets priority
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < n; i++) {
        if (in[i] == 0) {
            q.push(i);
        }
    }

    vector<int> ans;

    // Kahn's Algorithm
    while (!q.empty()) {
        int node = q.top();
        q.pop();

        ans.push_back(node);

        for (int neighbour : adj[node]) {
            in[neighbour]--;

            if (in[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }

    // Cycle detection
    if (ans.size() != n) {
        cout << "Cycle detected\n";
    }
    else {
        for (int node : ans) {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}