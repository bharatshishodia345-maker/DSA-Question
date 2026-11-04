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

int counter = 0;

int KthSmallElement(Node* root, int k) {
    if (root == nullptr) {
        return -1;
    }

    // Visit left subtree
    int leftAns = KthSmallElement(root->left, k);

    if (leftAns != -1) {
        return leftAns;
    }

    // Visit root
    counter++;

    if (counter == k) {
        return root->data;
    }

    // Visit right subtree
    return KthSmallElement(root->right, k);
}

int main() {
    vector<int> arr = {3, 2, 0, 1, 5, 6, 4};

    Node* root = nullptr;

    for (int val : arr) {
        root = insert(root, val);
    }

    int k = 1;

    counter = 0;

    int ans = KthSmallElement(root, k);

    cout << ans << endl;

    return 0;
}