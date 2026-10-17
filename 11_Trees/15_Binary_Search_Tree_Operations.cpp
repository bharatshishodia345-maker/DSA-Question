
#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

struct Operation {
    int type;
    int value;
};

Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } 
    else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

Node* searchNode(Node* root, int value) {
    if (root == nullptr || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return searchNode(root->left, value);
    }

    return searchNode(root->right, value);
}

Node* findMin(Node* root) {
    while (root != nullptr && root->left != nullptr) {
        root = root->left;
    }

    return root;
}

Node* deleteNode(Node* root, int value) {
    if (root == nullptr) {
        return nullptr;
    }

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    }
    else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    int n;
    cin >> n;

    vector<Operation> operations(n);

    for (int i = 0; i < n; i++) {
        cin >> operations[i].type;

        if (operations[i].type >= 1 &&
            operations[i].type <= 3) {
            cin >> operations[i].value;
        } else {
            operations[i].value = 0;
        }
    }

    Node* root = nullptr;

    for (int i = 0; i < n; i++) {
        int type = operations[i].type;
        int value = operations[i].value;

        if (type == 1) {
            root = insertNode(root, value);
        }
        else if (type == 2) {
            root = deleteNode(root, value);
        }
        else if (type == 3) {
            if (searchNode(root, value) != nullptr) {
                cout << "found" << '\n';
            } else {
                cout << "not found" << '\n';
            }
        }
        else if (type == 4) {
            if (root == nullptr) {
                cout << "Empty" << '\n';
            } else {
                inorder(root);
                cout << '\n';
            }
        }
        else if (type == 5) {
            if (root == nullptr) {
                cout << "Empty" << '\n';
            } else {
                preorder(root);
                cout << '\n';
            }
        }
        else if (type == 6) {
            if (root == nullptr) {
                cout << "Empty" << '\n';
            } else {
                postorder(root);
                cout << '\n';
            }
        }
    }

    return 0;
}
