#include<bits/stdc++.h>
using namespace std;

// Class to represent a tree node
class node {
public:
    char val;         // Value stored in the node
    node* left;       // Pointer to the left child
    node* right;      // Pointer to the right child

    // Constructor
    node(char val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to take input for the tree in level-order
node* inputTree() {
    cout << "Enter the root value (-1 for NULL): ";
    string val;
    cin >> val;

    node* root;
    if (val == "-1") {
        root = NULL;
    } else {
        root = new node(val[0]); // First character of the string
    }

    queue<node*> q;
    if (root != NULL) q.push(root);

    while (!q.empty()) {
        node* p = q.front();
        q.pop();

        string l, r;
        cout << "Enter left and right children of " << p->val << " (-1 for NULL): ";
        cin >> l >> r;

        node* myleft = (l == "-1") ? NULL : new node(l[0]);
        node* myright = (r == "-1") ? NULL : new node(r[0]);

        p->left = myleft;
        p->right = myright;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }

    return root;
}

// Function for in-order traversal
void inorder(node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// Function for level-order traversal
void print_levelOrder(node* root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
}

// Main function
int main() {
    cout << "Input the tree in level-order format:" << endl;
    node* root = inputTree();

    cout << "\nIn-Order Traversal:" << endl;
    inorder(root);

    cout << "\n\nLevel-Order Traversal:" << endl;
    print_levelOrder(root);

    return 0;
}
