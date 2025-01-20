#include<bits/stdc++.h>
using namespace std;
// create tree
char tree[20];
// create root
int root(char key)
{
    if(tree[0] !='\0')
    {
       cout<<"The tree had no root"<<endl;
    }
    else
    {
        tree[0] = key;
    }
    
}
// create left child
int left_child(char key, int level)
{
     if(tree[level] == '\0')
     {
        cout<<"No left child avilable"<<endl;
     }
     else
     {
        tree[(2*level)+1] = key;
     }
     
}

// create right child
int right_child(char key, int level)
{
    if(tree[level] == '\0')
    {
        cout<<"No right child available"<<endl;
    }
    else
    {
        tree[(2*level)+2] = key;
    }
    
}

// print the level tree
int print_level()
{
    cout<<"\nroot = 0";
    for (int i = 0; i < 20; i++)
    {
       if(tree[i]!='\0')
       {
          cout<<"\ninfo["<<i<<"]= "<<tree[i];
       }
       else
       {
         cout<<"\ninfo["<<i<<"]= "<<"-";
       }
       
    }
    
}

// print the tress in inOrder traversal
void inOrder(int level)
{
    if(level >=20 || tree[level] == '\0') return;
    inOrder(2*level+1); // for left subtree
    cout<<tree[level]<<" ";
    inOrder(2*level+2); // for right subtree
}
int main()
{
    root('A');
    left_child('B',0);
    right_child('C',0);

    left_child('D',1);
    left_child('E',2);

    left_child('G',3);
    right_child('H',3);

    left_child('K',7);
    left_child('L',8);
    right_child('M',8);
   
   print_level();
   cout << "\nPreorder Traversal: ";
   inOrder(0);

}