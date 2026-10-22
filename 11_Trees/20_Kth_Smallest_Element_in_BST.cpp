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

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(Node* root, int k, int& count, int& answer) {
    if (root == nullptr || count >= k) {
        return;
    }

    inorder(root->left, k, count, answer);

    if (count >= k) {
        return;
    }

    count++;

    if (count == k) {
        answer = root->data;
        return;
    }

    inorder(root->right, k, count, answer);
}

int main() {
    int n;
    cin >> n;

    Node* root = nullptr;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    int k;
    cin >> k;

    int count = 0;
    int answer = -1;

    if (k >= 1 && k <= n) {
        inorder(root, k, count, answer);
    }

    cout << answer << '\n';

    return 0;
}

