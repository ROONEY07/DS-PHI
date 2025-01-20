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

node* convert(int a[], int l, int r)
{
     // base - case
     if(l>r) return NULL;
     
     // create mid 
     int mid = (l+r)/2;
     // create root which i wanna return
     node* root = new node(a[mid]);
     node* leftRoot = convert(a,l,mid-1);
     node* rightRoot = convert(a,mid+1,r);

     root->left = leftRoot;
     root->right = rightRoot;

     return root;

}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    node* root = convert(a,0,n-1);
    print_levelOrder(root);
    
}