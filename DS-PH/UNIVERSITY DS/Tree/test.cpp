#include<bits/stdc++.h>
using namespace std;
char tree[20];

// create root
int root(char key)
{
    if(tree[0]!= '\0')
      {
         cout<<"Tree already had root"<<endl;
      }
    else
      {
         tree[0] = key;
      }
         
   return 0;
}

// create left child
int left_set(char key, int p)
{
    if(tree[p] == '\0')
    {
        cout<<"No left parent found"<<endl;
    }
    else
    {
        tree[(2*p)+1] = key;    
    }
    
}

// create right child
int right_set(char key, int p)
{
    if(tree[p]=='\0')
    {
        cout<<"No right parent found"<<endl;
    }
    else
    {
        tree[(2*p)+2] = key;
    }
    
}

// print tree

int main()
{
    
}