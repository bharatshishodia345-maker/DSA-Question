#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

bool isMirror(Node* left, Node* right) {
    if (left == NULL && right == NULL) {
        return true;
    }

    if (left == NULL || right == NULL) {
        return false;
    }

    if (left->data != right->data) {
        return false;
    }

    return isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

bool isSymmetric(Node* root) {
    if (root == NULL) {
        return true;
    }

    return isMirror(root->left, root->right);
}

int main() {
    vector<string> values;
    string s;

    while (cin >> s && s != "-1") {
        values.push_back(s);
    }

    if (values.empty() || values[0] == "null") {
        cout << 1 << endl;
        return 0;
    }

    Node* root = new Node(stoi(values[0]));
    queue<Node*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < (int)values.size()) {
        Node* curr = q.front();
        q.pop();

        if (i < (int)values.size() && values[i] != "null") {
            curr->left = new Node(stoi(values[i]));
            q.push(curr->left);
        }
        i++;

        if (i < (int)values.size() && values[i] != "null") {
            curr->right = new Node(stoi(values[i]));
            q.push(curr->right);
        }
        i++;
    }

    cout << (isSymmetric(root) ? 1 : 0) << endl;

    return 0;
}