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

node* input_Tree()                                                                                                                    
{
     // ami ai function ke kono root dite parbo na, karon input newar ag porjontto amar kache kono root nai
     // first er ja value ta , seita nij hate input nibo, niya oitake root banabo

     // amar input er jonno first root node lagbe, so normally akta value asbe jeita root hisebe asbe
     
     // first amar tree khali thakte pare, so -1 paile amar root NULL
     int val;
     cin>>val;
     // now create root note
     node* root ;
     if(val == -1) root = NULL;
     else root = new node(val);

     // amar first value ba root create kora done

     // amar ami amr root ke queue er moddhe diya dite pari
     queue<node*> q;
     // akon amar root khali na hole queue te root er value dibo
     if(root !=NULL) q.push(root);

     // akon level er moto baki 3ta procedure follow korbe
     while (!q.empty())
     {
         // 1st rule: line theke ber koro
         node* p = q.front();
         q.pop();

         // 2nd rule: baki jabotio kaj

         // so create children
         // children asbe left and right theke
         int l, r;
         cin>>l>>r;
         node* myLeft;
         node* myRight;
         if (l==-1) // jodi amar l khali thake tahole nUll bosiya daw, otherwise value diya daw
         {
            myLeft = NULL;
         } 
         else
         {
            myLeft = new node(l);
         }

         if (r == -1)
         {
            myRight = NULL;
         }
         else
         {
            myRight = new node(r);
         }

         // akon childreen banano sesh, akon aigulo ke connect korte hobe
         p->left = myLeft;
         p->right = myRight;
         
         
         
         // 3rd kaj korar moto amar kono children nai, tai age children banate hobe
         // 3rd rule: childreen guloke line theke ber kore niya aso
         if(p->left !=NULL) q.push(p->left);
         if(p->right !=NULL) q.push(p->right);
     }
     

   return root;
}

// count nodes of tree
int count(node* root)
{
    // base case
    if(root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);

    return l+r+1;
}
int main()
{
     node* root = input_Tree();
     cout<<"Total nodes is: "<<count(root);
   
   return 0;
}