#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}

int main() {
    int n;
    cin >> n;

    vector<string> values(n);

    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

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

    cout << height(root) << '\n';

    return 0;
}