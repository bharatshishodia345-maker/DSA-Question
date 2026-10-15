#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

int idx = -1;

Node* buildTree(vector<int>& arr) {
    idx++;

    if (idx >= (int)arr.size() || arr[idx] == -1) {
        return nullptr;
    }

    Node* root = new Node(arr[idx]);

    root->left = buildTree(arr);
    root->right = buildTree(arr);

    return root;
}

Node* LSA(Node* root, Node* p, Node* q) {
    // Base case
    if (root == nullptr || root == p || root == q) {
        return root;
    }

    Node* leftLCA = LSA(root->left, p, q);
    Node* rightLCA = LSA(root->right, p, q);

    // Both nodes found in different subtrees
    if (leftLCA != nullptr && rightLCA != nullptr) {
        return root;
    }

    // Return whichever subtree contains a target
    if (leftLCA != nullptr) {
        return leftLCA;
    }

    return rightLCA;
}

Node* findNode(Node* root, int value) {
    if (root == nullptr) {
        return nullptr;
    }

    if (root->data == value) {
        return root;
    }

    Node* leftResult = findNode(root->left, value);

    if (leftResult != nullptr) {
        return leftResult;
    }

    return findNode(root->right, value);
}

int main() {
    vector<int> arr = {
        1, 2, 4, -1, -1, 5, -1, -1,
        3, 6, -1, -1, 7, -1, -1
    };

    idx = -1;
    Node* root = buildTree(arr);

    // Find the two target nodes
    Node* p = findNode(root, 4);
    Node* q = findNode(root, 5);

    if (p == nullptr || q == nullptr) {
        cout << "Target node not found" << endl;
        return 0;
    }

    Node* ancestor = LSA(root, p, q);

    if (ancestor != nullptr) {
        cout << "Lowest Common Ancestor: "
             << ancestor->data << endl;
    } else {
        cout << "Lowest Common Ancestor not found" << endl;
    }

    return 0;
}