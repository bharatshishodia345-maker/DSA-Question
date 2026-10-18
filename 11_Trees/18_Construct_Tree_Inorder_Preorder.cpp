#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

int preIndex = 0;

Node* buildTree(
    vector<int>& inorder,
    vector<int>& preorder,
    int inStart,
    int inEnd,
    unordered_map<int, int>& pos
) {
    if (inStart > inEnd) {
        return nullptr;
    }

    int rootVal = preorder[preIndex++];
    Node* root = new Node(rootVal);

    int mid = pos[rootVal];

    root->left = buildTree(
        inorder, preorder, inStart, mid - 1, pos
    );

    root->right = buildTree(
        inorder, preorder, mid + 1, inEnd, pos
    );

    return root;
}

void postorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    int n;
    cin >> n;

    vector<int> inorder(n), preorder(n);

    for (int i = 0; i < n; i++) {
        cin >> inorder[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> preorder[i];
    }

    unordered_map<int, int> pos;

    for (int i = 0; i < n; i++) {
        pos[inorder[i]] = i;
    }

    preIndex = 0;

    Node* root = buildTree(
        inorder, preorder, 0, n - 1, pos
    );

    postorder(root);
    cout << '\n';

    return 0;
}