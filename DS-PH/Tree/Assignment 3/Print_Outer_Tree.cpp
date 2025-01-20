#include<bits/stdc++.h>
using namespace std;
// create tree
class node 
{
      public:
      int val;
      node* left;
      node* right;
      // constructor
      node(int val)
      {
          this->val = val;
          this->left = NULL;
          this->right = NULL;
      }
};

// take input the tree
node* inputTree()
{
     // jahatu ami tree er value gulo input hisebe nivo. and obveously amar kase root nai
     // tai aikhetre root amake nij hate banate hobe
    //  node* root; but amar root node to khali , ei jonno er age value nite hobe jei value ta root er moddhe dile
    // seita root hisebe kaj korbe
    int val;
    cin>>val;
    node* root ;
    if(val==-1) root = NULL;
    else root = new node(val); // root create done


    queue<node*> q;
    if(root!=NULL) q.push(root);

    while (!q.empty())
    {
        // line theke ber koro
        node* p = q.front();
        q.pop(); // queue theke akta akta value ber korsi
        

        // jabotio kaj koro
        node* myleft;
        node* myright;

        int l, r;
        cin>>l>>r;
        if(l == -1) myleft = NULL;
        else myleft = new node(l);

        if(r==-1) myright = NULL;
        else myright = new node(r);

        // amar left and right value create sesh. and aigulo tree er moddhe dite hobe
        p->left = myleft;
        p->right = myright;


        // child gulo ke ber koro. child gulo ke ber korar age ta banate hobe, cz ami input nischi amar child nai
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        
    }
    


    return root;
}

// print it in level order
void print_levelOrder(node* root)
{
      queue<node*> q;
      if(root!=NULL) q.push(root);

      while (!q.empty())
      {
           node* p = q.front();
           q.pop();

           cout<<p->val<<" ";

           if(p->left) q.push(p->left);
           if(p->right) q.push(p->right);
      }
      
}


// print outer tree
void Left_side_outerTree(node* root)
{
    if (root==NULL) return;

    if (root->left) Left_side_outerTree(root->left);
    else if (root->right) Left_side_outerTree(root->right);

    // Print the current node 
    cout << root->val << " ";
        
     
}

// right side outer tree
void right_side_outerTree(node* root)
{
      if(root==NULL) return;

      cout<<root->val<<" ";
      if(root->right) right_side_outerTree(root->right);
      else if (root->left) right_side_outerTree(root->left);

      
}

int main() 
{
    node* root = inputTree();
    
    // Skip root and print left boundary
    Left_side_outerTree(root->left);
    
    cout<<root->val<<" ";

    // Skip root and print left boundary
    right_side_outerTree(root->right);
    
    return 0;
}
