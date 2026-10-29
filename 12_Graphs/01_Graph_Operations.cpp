#include <bits/stdc++.h>
using namespace std;

class Graph {
    map<int, set<int>> adj;

public:
    // Add a vertex
    void addVertex(int x) {
        adj[x];
    }

    // Remove a vertex and all its edges
    void removeVertex(int x) {
        auto it = adj.find(x);

        if (it == adj.end()) {
            return;
        }

        for (int neighbor : it->second) {
            adj[neighbor].erase(x);
        }

        adj.erase(x);
    }

    // Add an undirected edge
    void addEdge(int x, int y) {
        if (adj.count(x) && adj.count(y)) {
            adj[x].insert(y);
            adj[y].insert(x);
        }
    }

    // Remove an undirected edge
    void removeEdge(int x, int y) {
        if (adj.count(x) && adj.count(y)) {
            adj[x].erase(y);
            adj[y].erase(x);
        }
    }

    // Check whether an edge exists
    bool checkEdge(int x, int y) {
        return adj.count(x) &&
               adj.count(y) &&
               adj[x].count(y);
    }

    // Print the adjacency matrix
    void printMatrix() {
        vector<int> vertices;

        for (const auto& entry : adj) {
            vertices.push_back(entry.first);
        }

        int n = vertices.size();
        vector<vector<int>> matrix(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[vertices[i]].count(vertices[j])) {
                    matrix[i][j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j > 0) {
                    cout << " ";
                }

                cout << matrix[i][j];
            }

            cout << '\n';
        }
    }
};

int main() {
    int n;
    cin >> n;

    Graph g;

    for (int i = 0; i < n; i++) {
        int op, x, y;
        cin >> op >> x;

        if (op == 1) {
            g.addVertex(x);
        }
        else if (op == 2) {
            g.removeVertex(x);
        }
        else {
            cin >> y;

            if (op == 3) {
                g.addEdge(x, y);
            }
            else if (op == 4) {
                g.removeEdge(x, y);
            }
            else if (op == 5) {
                cout << (g.checkEdge(x, y) ? "Yes" : "No") << '\n';
            }
        }
    }

    g.printMatrix();

    return 0;
}