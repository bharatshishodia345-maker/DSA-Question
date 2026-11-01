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

// Insert a node into BST
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Build BST
Node* buildTree(vector<int>& nums) {
    Node* root = nullptr;

    for (int val : nums) {
        root = insert(root, val);
    }

    return root;
}

// Validate BST using range approach
bool helper(Node* root, long long minVal, long long maxVal) {
    if (root == nullptr) {
        return true;
    }

    if (root->data <= minVal || root->data >= maxVal) {
        return false;
    }

    return helper(root->left, minVal, root->data) &&
           helper(root->right, root->data, maxVal);
}

// Check whether the tree is a valid BST
bool isValid(Node* root) {
    return helper(root, LLONG_MIN, LLONG_MAX);
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};

    Node* root = buildTree(nums);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    if (isValid(root)) {
        cout << "Valid Binary Search Tree" << endl;
    }
    else {
        cout << "Invalid Binary Search Tree" << endl;
    }

    return 0;
}