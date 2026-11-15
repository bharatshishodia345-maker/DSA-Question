#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int best = INT_MIN;

int maxdown(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int ld = max(0, maxdown(root->left));
    int rd = max(0, maxdown(root->right));

    // Maximum path passing through the current node
    best = max(best, root->data + ld + rd);

    // Return maximum one-sided path to the parent
    return root->data + max(ld, rd);
}

int main() {
    vector<string> values;
    string temp;

    while (cin >> temp) {
        if (temp == "-1") {
            break;
        }
        values.push_back(temp);
    }

    int n = values.size();

    if (n == 0 || values[0] == "null") {
        cout << 0 << '\n';
        return 0;
    }

    Node* root = new Node(stoi(values[0]));

    queue<Node*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < n) {
        Node* current = q.front();
        q.pop();

        // Left child
        if (i < n && values[i] != "null") {
            current->left = new Node(stoi(values[i]));
            q.push(current->left);
        }
        i++;

        // Right child
        if (i < n && values[i] != "null") {
            current->right = new Node(stoi(values[i]));
            q.push(current->right);
        }
        i++;
    }

    best = INT_MIN;

    maxdown(root);

    cout << best << '\n';

    return 0;
}