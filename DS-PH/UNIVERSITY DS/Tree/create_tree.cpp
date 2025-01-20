
#include<bits/stdc++.h>
using namespace std;

char tree[20];
// create root
int root(char key)
{
    if(tree[0] !='\0')
    {
        cout<<"Tree had already root"<<endl;
    }
    else
    {
        tree[0] = key;
    }
    
}

// create left child
int left_set(char key, int level)
{
     if(tree[level] == '\0')
     {
        cout<<"No left child is available"<<endl;
     }
     else
     {
        tree[(2*level)+1] = key;
     }
     
}

// create right child
int right_set(char key, int level)
{
    if(tree[level] == '\0')
    {
        cout<<"No right child is available"<<endl;
    }
    else
    {
        tree[(2*level)+2] = key; 
    }
    
}

// print the input level
int print_level()
{
    cout<<"\nroot = 0";
    for (int i = 0; i < 20; i++)
    {
        if(tree[i] != '\0')
        {
            cout<<"\ninfo["<<i<<"]= "<<tree[i];
        }
        else
        {
            cout<<"\ninfo["<<i<<"]= "<<"-";
        }
        
    }
    
}
int main()
{
    root('A');
    left_set('B',0);
    right_set('C',0);

    left_set('D',1);
    left_set('E',2);

    left_set('G',3);
    right_set('H',3);

    left_set('K',7);
    right_set('L',8);
    right_set('M',8);

    print_level();
}