#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* left;
    node* right;
    //constructor
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// traveinsg tree in pre order tree
void pre_order(node* root)
{
    // base - case
    if (root == NULL)
    {
        return;
    }
    
    // first root node ke print kore, recursion ke bolo baki gulo print kore niya aste
    cout<<root->val<<" ";
    pre_order(root->left);
    pre_order(root->right);
    
}

int main()
{
      // declare value of nodes tree
      node* root = new node(10);
      node* a = new node(20); 
      node* b = new node(30); 
      node* c = new node(40); 
      node* d = new node(50); 
      node* e = new node(60); 
      node* f = new node(70); 
      node* g = new node(80); 
      node* h = new node(90); 
      node* i = new node(100); 
      
}