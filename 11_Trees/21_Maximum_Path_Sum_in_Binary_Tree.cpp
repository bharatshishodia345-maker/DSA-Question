
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

int maxpathSum(Node* root, int& ans) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return root->data;

    int leftsum = maxpathSum(root->left, ans);
    int rightsum = maxpathSum(root->right, ans);

    if (root->left != NULL && root->right != NULL) {
        ans = max(ans, leftsum + root->data + rightsum);
        return root->data + max(leftsum, rightsum);
    }

    if (root->left != NULL)
        return root->data + leftsum;

    return root->data + rightsum;
}

int main() {
    vector<string> values;
    string x;

    while (cin >> x && x != "-1") {
        values.push_back(x);
    }

    if (values.empty() || values[0] == "null")
        return 0;

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

    int ans = INT_MIN;
    maxpathSum(root, ans);

    cout << ans << "\n";
    return 0;
}
