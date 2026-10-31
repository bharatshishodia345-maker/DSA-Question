#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
Node* insert(Node* root,int val){
    if (root == NULL){
        return new Node(val);
    }

    if(root->data > val){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}

Node* BuildTree(vector<int> &arr){
    Node* root = NULL;

    for(int val: arr){
        root = insert(root,val);
    }
    return root;
}

void inorder(Node* root,int value){
    if(root == NULL){
        cout<<"No"<<endl;
        return;
    }
    if(value == root->data){
        cout<<"Yes"<<endl;
        return;
    }
    else if (value < root->data){
        return inorder(root->left,value);
    }
    else if (value > root->data){
        return inorder(root->right,value);
    }
    

    
}

int main(){
    vector<int> arr = {3,2,1,5,6,4};
    Node* root = BuildTree(arr);
    int value = 6;
    inorder(root,value);
    cout<<endl;

}