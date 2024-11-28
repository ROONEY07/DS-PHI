#include<bits/stdc++.h>
using namespace std;
// Create a node for doubly linked list
class node 
{
    public:
    int val;
    node* next;
    node* prev;

    // constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// print the doubly linked list  in forwad way
void PrintNode(node* head)
{
    cout<<"Forward linked list: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// print the doubly linked list in Reverse way
void ReversePrint(node* tail)
{
     // store the tail
     cout<<"Reverse linked list: ";
     node* tmp = tail;
     while (tmp!=NULL)
     {
         cout<<tmp->val<<" ";
         tmp = tmp->prev;
     }
     cout<<endl;
}

// create a function that insert at tail
void insert_tail(node* &head, node* &tail, int val)
{
    // create a newNode that insert at tail
    node* newNode = new node(val);
    // jodi amar head NULL hoi, sei khetre tail and head akoi position a thakbe and 
    // newNode tai head and tail hobe
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // otherwise insert at tail
    tail->next = newNode;
    newNode->prev = tail;

    // update the tail
    tail = newNode;
    
}
// insert at head
void insert_head(node* &head, node* &tail, int val)
{
    // create a newNode that insert at head
    node* newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    // otherwise insert at head
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

// size of linked list
int sizeOfLinked(node* head)
{
   node* tmp = head;
   int count = 0;
   while (tmp!=NULL)
   {
      count++;
      tmp = tmp->next;
   }
   return count;
}


int main()
{
    // Declare head and trac the tail
    node* head = NULL;
    node* tail = NULL;

    // take input the doubly linked list
    int val;
    cout<<"Enter the val: ";
    while (cin>>val && val!=-1)
    {
        insert_tail(head,tail,val);
    }
    



    int pos,val1;
    cin>>pos>>val1;
    
    if (pos==0)
    {
        // cout<<"Invalid position"<<endl;
        insert_head(head,tail,val1);
    }
    else if (pos == sizeOfLinked(head))
    {
        insert_tail(head,tail,val1);
    }

    // insert_any_pos(head,1,100);

    // print the node
    PrintNode(head);
    ReversePrint(tail);
    
    
    
}