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
// take input the tress
node* input_tree()
{
    // first time amar kache kisu nai, root o nai
    // jahatu amar kache kono root nai, tai amak nij hate root banate hobe
    int val;
    cin>>val;
    node* root;
    
    // akon amar kach kono value na thakle root kono value receive korbe na, orthat root khali
    if(val== -1) root = NULL;
    else root = new node(val);


     // amar root create kora done
     queue<node*> q;
    // akon ami directly root push korte parbo na, karon amar root khali thakle error dibe , so
    if(root != NULL) q.push(root);

    while (!q.empty())
    {
        // 1st rule: line theke akon root ke ber koro
        node* p = q.front();
        q.pop();
        
        // 2nd rule: jabotio kaj, input newar jonno jabotio kaj hobe, children create kora 3rd rule apply korar jonno
        // childreen er duita value thake left and right value so

         node* myleft;
         node* myRight;

        int l,r;
        cin>>l>>r;

        if(l==-1) myleft = NULL; 
        else myleft = new node(l);

        if(r == -1) myRight = NULL;
        else myRight = new node(r);

        // left and right er vale dewa sesh akon connect kora
        p->left = myleft;
        p->right = myRight;



        // 3rd rule: child nodes gule ke ber kora
        if(p->left !=NULL) q.push(p->left);
        if(p->right != NULL) q.push(p->right);
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

void insert_BST(node* &root, int x)
{
     // base case
     if(root == NULL)
     {
        root = new node(x);
        return;
     }

     if(x < root->val)
     {
        // x er value jodi root theke choto hoi, tahole pam pache ase, so pam pache ase check korbo, tar jaiga khali ase kina
        if(root->left == NULL)
        {
            root->left = new node(x);
        }
        else
        {
            insert_BST(root->left,x);
        }
        
     }
     else
     {
        if(root->right == NULL)
        {
            root->right = new node(x);
        }
        else
        {
            insert_BST(root->right,x);
        }
        
     }
     
}
int main()
{
    node* root = input_tree();
    int x;
    cout << "Enter the value to insert: ";
    cin.ignore(INT_MAX, '\n');  // Ignore any leftover input until the next newline
    cin >> x;              // Take the input for insertion

    insert_BST(root,x);
    print_levelOrder(root);

    return 0;
}
