#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> &levelorder)
{
    idx++;
    if (levelorder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(levelorder[idx]);
    root->left = buildTree(levelorder);
    root->right = buildTree(levelorder);

    return root;
}

int sum(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    return leftSum+rightSum+root->data;
}

int main()
{
    vector<int> leveorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(leveorder);
    int Ans = sum(root);
    cout<<Ans << endl;
}