
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

Node* buildTree(const vector<int>& arr, int& index) {
    index++;

    if (index >= (int)arr.size() || arr[index] == -1) {
        return nullptr;
    }

    Node* root = new Node(arr[index]);

    root->left = buildTree(arr, index);
    root->right = buildTree(arr, index);

    return root;
}

// Converts every node into the sum of its subtree
// and returns the updated subtree sum.
int sum(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);

    root->data += leftSum + rightSum;

    return root->data;
}

int main() {
    vector<int> arr = {
        1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1
    };

    int index = -1;
    Node* root = buildTree(arr, index);

    cout << sum(root) << '\n';

    return 0;
}

