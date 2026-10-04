#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }


};
static int idx = -1;
Node* BuildTree(vector<int> &postorder){
    idx++;
    if (postorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(postorder[idx]);
    root->left=BuildTree(postorder);
    root->right=BuildTree(postorder);
}

void postOrder(Node* root){
    if (root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    vector<int> postorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(postorder);
    postOrder(root);
    cout<<endl;
}