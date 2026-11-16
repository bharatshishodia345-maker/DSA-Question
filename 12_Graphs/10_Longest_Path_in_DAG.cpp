#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n + 1);
    vector<int> indegree(n + 1, 0);
    vector<int> time(n + 1, 1);

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        indegree[v]++;
    }

    queue<int> q;

    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    int processed = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        processed++;

        for (int neighbour : adj[node]) {
            time[neighbour] = max(
                time[neighbour],
                time[node] + 1
            );

            indegree[neighbour]--;

            if (indegree[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }

    // Cycle detection
    if (processed != n) {
        cout << "Cycle detected\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << time[i];

        if (i != n) {
            cout << " ";
        }
    }

    cout << '\n';

    return 0;
}