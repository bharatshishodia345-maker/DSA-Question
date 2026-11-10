#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n));

    // Input adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
        }
    }

    // Calculate indegree
    vector<int> indegree(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adj[i][j] == 1) {
                indegree[j]++;
            }
        }
    }

    // Min heap
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> ans;

    // Kahn's Algorithm
    while (!q.empty()) {
        int node = q.top();
        q.pop();

        ans.push_back(node);

        for (int j = 0; j < n; j++) {
            if (adj[node][j] == 1) {
                indegree[j]--;

                if (indegree[j] == 0) {
                    q.push(j);
                }
            }
        }
    }

    // Cycle detection
    if (ans.size() != n) {
        cout << "Cycle detected";
    }
    else {
        for (int x : ans) {
            cout << x << " ";
        }
    }

    cout << endl;

    return 0;
}