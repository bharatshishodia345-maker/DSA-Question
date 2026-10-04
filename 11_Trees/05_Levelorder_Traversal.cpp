#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> &levelorder)
{
    idx++;
    if (levelorder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(levelorder[idx]);
    root->left = buildTree(levelorder);
    root->right = buildTree(levelorder);

    return root;
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }
        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    vector<int> leveorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(leveorder);
    levelOrder(root);
    cout << endl;
}