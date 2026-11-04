#include <iostream>
#include <vector>
#include <queue>

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

    vector<int> color(n, -1);

    // Check all components (including disconnected components)
    for (int start = 0; start < n; start++) {

        if (color[start] != -1) {
            continue;
        }

        queue<int> q;
        q.push(start);
        color[start] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int i = 0; i < n; i++) {

                if (adj[node][i] == 1) {

                    if (color[i] == -1) {
                        color[i] = 1 - color[node];
                        q.push(i);
                    }
                    else if (color[i] == color[node]) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}