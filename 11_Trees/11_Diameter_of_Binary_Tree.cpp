#include <iostream>
#include <vector>
#include <algorithm>
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

Node* buildTree(vector<int>& preorder) {
    idx++;

    if (idx >= static_cast<int>(preorder.size()) || preorder[idx] == -1) {
        return nullptr;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

int diameterAns = 0;

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    diameterAns = max(diameterAns, leftHeight + rightHeight);

    return max(leftHeight, rightHeight) + 1;
}

int diameter(Node* root) {
    diameterAns = 0;
    height(root);
    return diameterAns;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    idx = -1;
    Node* root = buildTree(preorder);

    cout << diameter(root) << endl;

    return 0;
}