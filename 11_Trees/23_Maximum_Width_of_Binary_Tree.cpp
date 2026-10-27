
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* buildTree(const vector<int>& values) {
    if (values.empty() || values[0] == -1) {
        return nullptr;
    }

    Node* root = new Node(values[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < (int)values.size()) {
        Node* curr = q.front();
        q.pop();

        if (i < (int)values.size() && values[i] != -1) {
            curr->left = new Node(values[i]);
            q.push(curr->left);
        }
        i++;

        if (i < (int)values.size() && values[i] != -1) {
            curr->right = new Node(values[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

int maxWidth(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    queue<pair<Node*, unsigned long long>> q;
    q.push({root, 0});

    unsigned long long maximumWidth = 0;

    while (!q.empty()) {
        int levelSize = q.size();
        unsigned long long firstIndex = q.front().second;
        unsigned long long lastIndex = firstIndex;

        for (int i = 0; i < levelSize; i++) {
            auto [curr, index] = q.front();
            q.pop();

            // Normalize indices to avoid unnecessary growth.
            index -= firstIndex;
            lastIndex = index;

            if (curr->left != nullptr) {
                q.push({curr->left, 2 * index + 1});
            }

            if (curr->right != nullptr) {
                q.push({curr->right, 2 * index + 2});
            }
        }

        maximumWidth = max(maximumWidth, lastIndex + 1);
    }

    return static_cast<int>(maximumWidth);
}

int main() {
    vector<int> levelOrder = {
        1, 2, 3, -1, -1, 4, 5
    };

    Node* root = buildTree(levelOrder);

    cout << maxWidth(root) << '\n';

    return 0;
}
