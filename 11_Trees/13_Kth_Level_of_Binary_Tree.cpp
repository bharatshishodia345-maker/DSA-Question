#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right  = NULL;
    }
};
static int index = -1;
Node* buildTree(vector<int>&arr){
    index+=1;
    if (arr[index] == -1){
        return NULL;
    }

    Node* root = new Node(arr[index]);
    root->left = buildTree(arr);
    root->right = buildTree(arr);
}
void kth(Node* root, int k){
    if(root == NULL){
        return;
    }

    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    kth(root->left,k-1);
    kth(root->right,k-1);
}






int main(){
    vector<int> arr = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(arr);

    kth(root,3);
    
}