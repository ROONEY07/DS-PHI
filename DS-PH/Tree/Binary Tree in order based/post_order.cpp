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
void post_order(node* root)
{
    // base - case
    if (root == NULL)
    {
        return;
    }
    
    // first root node ke print kore, recursion ke bolo baki gulo print kore niya aste
    post_order(root->left);
    post_order(root->right);
    cout<<root->val<<" ";
    
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

       // now connect the trees, or set brances the tress
      // as they are post_order tress, they follow left-right-root

    
     // rule - 01 
     root->left = a;
     a->left = c;
     c->right = e;
     a->right = h;
     h->right = i;
     root->right = b;
     b->right = d;
     d->left = f;
     d->right = g;


    // rule - 02
    //   root->right = b;
    //   b->right = d;
    //   d->right = g;
    //   d->left = f;
    //   root->left = a;
    //   a->right = h;
    //   h->right = i;
    //   a->left = c;
    //   c->right = e;
   
     
     post_order(root);

}