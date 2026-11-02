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

// Insert node into BST
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
Node* buildTree(vector<int>& arr) {
    Node* root = nullptr;

    for (int val : arr) {
        root = insert(root, val);
    }

    return root;
}

// Find Minimum Difference
void mindiff(Node* root, Node*& prev, int& ans) {
    if (root == nullptr) {
        return;
    }

    // Traverse Left Subtree
    mindiff(root->left, prev, ans);

    // Compare Current Node with Previous Node
    if (prev != nullptr) {
        ans = min(ans, root->data - prev->data);
    }

    // Update Previous Node
    prev = root;

    // Traverse Right Subtree
    mindiff(root->right, prev, ans);
}

// Wrapper Function
int getMinimumDifference(Node* root) {
    Node* prev = nullptr;
    int ans = INT_MAX;

    mindiff(root, prev, ans);

    return ans == INT_MAX ? -1 : ans;
}

// Main Function
int main() {

    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node* root = buildTree(arr);

    cout << "Minimum Difference: "
         << getMinimumDifference(root) << endl;

    return 0;
}