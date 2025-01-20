//////////Binary tree traversing/////////////
#include<bits/stdc++.h>
using namespace std;

char tree[20];

// Function to set the root of the tree
int root(char key) 
{
    if (tree[0] != '\0')
        cout << "Tree already had root\n";
    else
        tree[0] = key;
    return 0;
}

// Function to set the left child
int left_set(char key, int parent) 
{
    if (tree[parent] == '\0')
        cout << "\nCan't set child at " << (parent * 2) + 1 << " , no parent found\n";
    else
        tree[(parent * 2) + 1] = key;
    return 0;
}

// Function to set the right child
int right_set(char key, int parent) 
{
    if (tree[parent] == '\0')
        cout << "\nCan't set child at " << (parent * 2) + 2 << " , no parent found\n";
    else
        tree[(parent * 2) + 2] = key;
    return 0;
}

// Function to print the tree in level order                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
int print_tree() 
{
    cout <<"\nroot=0";
    for (int i = 0; i < 20; i++) 
    {
        if (tree[i] != '\0')
            cout <<endl<<"  info["<<i<<"]="<< tree[i];
        else
            cout <<endl<<"  info["<<i<<"]="<< "-";
    }

    return 0;
}
                                              
// Function for preorder traversal
void preorder_traversal(int index) 
{
    if (index >= 20 || tree[index] == '\0') return;
    cout << tree[index] << " ";       // Visit node
    preorder_traversal(2 * index + 1); // Traverse left subtree
    preorder_traversal(2 * index + 2); // Traverse right subtree
}

// Driver Code
int main() 
{
    root('A');
    left_set('B', 0);              
    right_set('C', 0);       
    left_set('D', 1);         
    left_set('E', 2);        
    left_set('G', 3);        
    right_set('H', 3);       
    left_set('K', 7);        
    left_set('L', 8);         
    right_set('M', 8);        

    print_tree();


    cout << "\nPreorder Traversal: ";
    preorder_traversal(0);


    return 0;
}