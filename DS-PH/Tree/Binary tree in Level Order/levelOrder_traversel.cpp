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

// level order
void level_order(node* root)
{
    // line theke ber kore queue the rakhbo, so create queue
    queue<node*> q;
    // akon amar queue jahatu khali, ake null na howa porjontto bolle error dibe, tai ake root node diya dite hobe
    q.push(root); // first value dewa sesh akon 3ta rule follow korbo
    
    while (!q.empty())
    {
        // 1st rule
       //line theke ber kora                                                                                                                                                                                                                                
       node* f = q.front();
       q.pop();

       // 2nd rule
       // line theke ber kore kaj kore fela
       cout<<f->val<<" ";

       // 3rd rule
       // child node guloke line theke ber kora
       if(f->left !=NULL) q.push(f->left);
       if(f->right !=NULL) q.push(f->right);

    }
    
    

}
int main()
{
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

      // now connected the nodes
      root->left = a;
      a->left = c;
      c->right = e;
      a->right = h;
      h->right = i;
      root->right = b;
      b->right = d;
      d->left = f;
      d->right = g;

      level_order(root);
}