#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

int diameter = 0;

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    diameter = max(diameter, leftHeight + rightHeight);

    return 1 + max(leftHeight, rightHeight);
}

int main() {
    int n;
    cin >> n;

    unordered_map<int, Node*> nodes;
    Node* root = nullptr;

    for (int i = 0; i < n; i++) {
        int val, l, r;
        cin >> val >> l >> r;

        if (nodes.find(val) == nodes.end()) {
            nodes[val] = new Node(val);
        }

        Node* curr = nodes[val];

        if (l != -1) {
            if (nodes.find(l) == nodes.end()) {
                nodes[l] = new Node(l);
            }
            curr->left = nodes[l];
        }

        if (r != -1) {
            if (nodes.find(r) == nodes.end()) {
                nodes[r] = new Node(r);
            }
            curr->right = nodes[r];
        }

        if (i == 0) {
            root = curr;
        }
    }

    height(root);
    cout << diameter << '\n';

    return 0;
}