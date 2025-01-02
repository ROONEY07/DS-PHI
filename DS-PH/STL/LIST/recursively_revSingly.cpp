#include<bits/stdc++.h>
using namespace std;
// create node for singly linked list
class node 
{
     public:
     int val;
     node* next;

     // constructor
     node(int val)
     {
        this->val = val;
        this->next = NULL;
     }
};

// print the node
void PrintNode(node* head)
{
    // cout<<"Linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
}

// insert at tail
void insert_tail(node* &head,node* &tail,int val)
{
    // create a node that insert at tail
    node* newNode = new node(val);
    // if the head is NULL
    if (head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // otherwise insert at tail
    node* tmp = tail;
    tail->next = newNode;

    // update the tail
    tail = newNode;
    
}

// reverse print recursively
void recursively_rev(node* &head)
{
     // base case
     if(head==NULL) return;
     recursively_rev(head->next);
     cout<<head->val<<" ";

   // but it is not actually print reverse
}

// print the actual singly linked list
void reverse_singly(node* &head, node* current)
{
    // base case
    if(current->next==NULL)
    {
        head = current;
        return;
    }

    reverse_singly(head,current->next);
    current->next->next = current;
    current->next = NULL;
}
int main()
{
    // declare head and tail
    node* head = NULL;
    node* tail = NULL;

    // take input the node
    int val;
    cout<<"Enter the val: ";
    while (cin>>val && val!=-1)
    {
       insert_tail(head,tail,val);
    }

    // print the node
    PrintNode(head);
    // recursively_rev(head);
    reverse_singly(head,head);
    PrintNode(head);
    
}