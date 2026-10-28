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

vector <int> morris(Node* root){
    vector<int> ans;

    Node* curr = root;

    while(curr != NULL){
        if(curr->left == NULL){
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else{
            Node* IP = curr->left;
            while(IP->right != NULL && IP->right != curr){
                IP = IP->right;
            }
            if(IP->right == NULL){
                IP->right = curr;
                curr = curr->left;
            }
            else{
                IP->right == NULL;
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
     for(auto i: ans){
        cout<<i<<" ";
     }
     cout<<endl;
}



int main(){
    vector<int> inorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(inorder);
    morris(root);
    cout<<endl;
    return 0 ;
}