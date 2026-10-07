#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Build binary tree from preorder representation.
// -1 represents NULL.
Node* buildTree(vector<int>& preorder, int& idx) {
    idx++;

    if (preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);

    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);

    return root;
}

// Check whether two binary trees are identical.
bool isSameTree(Node* p, Node* q) {
    // Both nodes are NULL.
    if (p == NULL && q == NULL) {
        return true;
    }

    // One node is NULL and the other is not.
    if (p == NULL || q == NULL) {
        return false;
    }

    // Check current node and both subtrees.
    bool isLeftSame = isSameTree(p->left, q->left);
    bool isRightSame = isSameTree(p->right, q->right);

    return isLeftSame &&
           isRightSame &&
           p->data == q->data;
}

int main() {
    // Tree 1:
    //        1
    //       / \
    //      2   3
    //
    vector<int> preorder1 = {
        1, 2, -1, -1,
        3, -1, -1
    };

    // Tree 2:
    //        1
    //       / \
    //      2   3
    //
    vector<int> preorder2 = {
        1, 2, -1, -1,
        3, -1, -1
    };

    int idx1 = -1;
    int idx2 = -1;

    Node* root1 = buildTree(preorder1, idx1);
    Node* root2 = buildTree(preorder2, idx2);

    if (isSameTree(root1, root2)) {
        cout << "Same Tree" << endl;
    } else {
        cout << "Not Same Tree" << endl;
    }

    return 0;
}