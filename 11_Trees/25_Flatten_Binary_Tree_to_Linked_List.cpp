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

// Build Binary Tree using Preorder
Node* buildTree(vector<int>& arr, int& idx) {
    idx++;

    if (idx >= arr.size() || arr[idx] == -1) {
        return nullptr;
    }

    Node* root = new Node(arr[idx]);

    root->left = buildTree(arr, idx);
    root->right = buildTree(arr, idx);

    return root;
}

// Flatten Binary Tree into Linked List
void flatten(Node* root, Node*& nextRight) {
    if (root == nullptr) {
        return;
    }

    // Reverse Preorder: Right -> Left -> Root
    flatten(root->right, nextRight);
    flatten(root->left, nextRight);

    // Modify pointers
    root->left = nullptr;
    root->right = nextRight;

    nextRight = root;
}

// Print Flattened Tree
void printFlattenedTree(Node* root) {
    while (root != nullptr) {
        cout << root->data << " ";
        root = root->right;
    }
    cout << '\n';
}

int main() {
    vector<int> arr = {
        1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1
    };

    int idx = -1;

    Node* root = buildTree(arr, idx);

    Node* nextRight = nullptr;

    flatten(root, nextRight);

    cout << "Flattened Binary Tree: ";
    printFlattenedTree(root);

    return 0;
}