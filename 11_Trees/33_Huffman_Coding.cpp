#include <bits/stdc++.h>
using namespace std;

struct Node {
    char ch;
    int freq;
    int order;

    Node* left;
    Node* right;

    Node(char c, int f, int o) {
        ch = c;
        freq = f;
        order = o;
        left = right = nullptr;
    }
};

struct Compare {
    bool operator()(Node* a, Node* b) {
        if (a->freq != b->freq) {
            return a->freq > b->freq;
        }

        return a->order > b->order;
    }
};

void preorder(Node* root, string code) {
    if (root == nullptr) {
        return;
    }

    // Leaf node
    if (root->left == nullptr && root->right == nullptr) {
        cout << root->ch << ": "
             << (code.empty() ? "0" : code) << "\n";
        return;
    }

    preorder(root->left, code + "0");
    preorder(root->right, code + "1");
}

int main() {
    string s;
    cin >> s;

    int n = s.length();

    vector<int> freq(n);

    for (int i = 0; i < n; i++) {
        cin >> freq[i];
    }

    priority_queue<Node*, vector<Node*>, Compare> pq;

    // Create leaf nodes
    for (int i = 0; i < n; i++) {
        pq.push(new Node(s[i], freq[i], i));
    }

    int nextOrder = n;

    // Build Huffman Tree
    while (pq.size() > 1) {

        Node* left = pq.top();
        pq.pop();

        Node* right = pq.top();
        pq.pop();

        Node* parent = new Node(
            '\0',
            left->freq + right->freq,
            nextOrder++
        );

        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    Node* root = pq.top();

    // Generate Huffman Codes
    preorder(root, "");

    return 0;
}