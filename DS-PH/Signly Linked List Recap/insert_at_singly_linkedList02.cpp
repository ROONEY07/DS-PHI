#include<bits/stdc++.h>
using namespace std;
// create nodes
class node
{
    public:
     int val;
     node* next;

     //constructor 
     node(int val)
     {
         this->val = val;
         this->next = NULL;
     }
};
// create a function to insert node at any position
void insert_at_pos(node* head, int pos, int val)
{
    // to insert new nodes to any position , at first create that node
    node* newNode = new node(val);
    node* tmp = head;
    // to insert a node to a specific position, for that we need to go the previous node 
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }
    // cout<<tmp->val;
    // tmp akon pos-1 ghore ache..
    // now linked the newNode 
    newNode->next = tmp->next;
    tmp->next = newNode;
    // cout<<"\nInserted at position "<<pos<<endl<<endl;
    
}

// now print the node by create a function
void print_node(node* head)
{
    cout<<"\nYour linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    // declare dynamic object of nodes
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    node* d = new node(50);

    // now linked the nodes
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    
    // first call the insert at position function
    // int pos;
    // cout<<"Enter the position: ";
    // cin>>pos;
    // int val;
    // cout<<"Enter the val: ";
    // cin>>val;
    // insert_at_pos(head, pos,val);
    print_node(head);

    insert_at_pos(head, 5,100);

    print_node(head);
}