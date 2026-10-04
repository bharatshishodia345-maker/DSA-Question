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
        right = left = NULL;

    }

};

static int idx = -1;

Node* BuildTree(vector<int> &inorder){
    idx++;
    if(inorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(inorder[idx]);
    root->left = BuildTree(inorder);
    root->right = BuildTree(inorder);

}

void inOrder(Node* root){
    if (root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
    vector<int> inorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(inorder);
    inOrder(root);
    cout<<endl;
    return 0 ;
}