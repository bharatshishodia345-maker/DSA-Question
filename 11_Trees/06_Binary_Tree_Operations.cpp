#include <iostream>
#include <queue>
#include <vector>
#include <string>

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

// Insert a node level by level
Node* insert(Node* root, int data) {
    Node* newNode = new Node(data);

    if (root == NULL) {
        return newNode;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        if (curr->left == NULL) {
            curr->left = newNode;
            return root;
        } else {
            q.push(curr->left);
        }

        if (curr->right == NULL) {
            curr->right = newNode;
            return root;
        } else {
            q.push(curr->right);
        }
    }

    return root;
}

// Inorder: Left -> Root -> Right
void inOrder(Node* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }

    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

// Preorder: Root -> Left -> Right
void preOrder(Node* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }

    ans.push_back(root->data);
    preOrder(root->left, ans);
    preOrder(root->right, ans);
}

// Postorder: Left -> Right -> Root
void postOrder(Node* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }

    postOrder(root->left, ans);
    postOrder(root->right, ans);
    ans.push_back(root->data);
}

// Convert traversal vector to string
string formatTraversal(const vector<int>& ans) {
    string result;

    for (int x : ans) {
        result += to_string(x) + " ";
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    Node* root = NULL;
    vector<string> output;

    for (int i = 0; i < n; i++) {
        int op;
        cin >> op;

        // 1 -> Insert
        if (op == 1) {
            int value;
            cin >> value;

            root = insert(root, value);
        }

        // 2 -> Inorder
        else if (op == 2) {
            if (root == NULL) {
                output.push_back("Empty");
            } else {
                vector<int> ans;
                inOrder(root, ans);
                output.push_back(formatTraversal(ans));
            }
        }

        // 3 -> Preorder
        else if (op == 3) {
            if (root == NULL) {
                output.push_back("Empty");
            } else {
                vector<int> ans;
                preOrder(root, ans);
                output.push_back(formatTraversal(ans));
            }
        }

        // 4 -> Postorder
        else if (op == 4) {
            if (root == NULL) {
                output.push_back("Empty");
            } else {
                vector<int> ans;
                postOrder(root, ans);
                output.push_back(formatTraversal(ans));
            }
        }
    }

    for (const string& s : output) {
        cout << s << endl;
    }

    return 0;
}