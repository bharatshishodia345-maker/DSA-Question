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
Node* buildTree(vector<int>& preorder, int& idx) {
    idx++;

    if (idx >= preorder.size() || preorder[idx] == -1) {
        return nullptr;
    }

    Node* root = new Node(preorder[idx]);

    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);

    return root;
}

// Validate BST
bool helper(Node* root, Node* minNode, Node* maxNode) {
    if (root == nullptr) {
        return true;
    }

    if (minNode != nullptr && root->data <= minNode->data) {
        return false;
    }

    if (maxNode != nullptr && root->data >= maxNode->data) {
        return false;
    }

    return helper(root->left, minNode, root) &&
           helper(root->right, root, maxNode);
}

// Check BST validity
bool isValid(Node* root) {
    return helper(root, nullptr, nullptr);
}

int main() {

    // Preorder: -1 represents NULL
    vector<int> preorder = {
        3, 2, 1, -1, -1, -1, 5, 4, -1, -1, 6, -1, -1
    };

    int idx = -1;

    Node* root = buildTree(preorder, idx);

    if (isValid(root)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}