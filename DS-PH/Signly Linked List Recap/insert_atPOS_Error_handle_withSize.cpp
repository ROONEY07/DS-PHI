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
// insert at any position by creating function
void insert_at_pos(node* head, int pos, int val)
{
    // create node that want to insert at any position
    node* newNode = new node(val);
    node* tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }
    // now linked the node
    newNode->next = tmp->next;
    tmp->next = newNode;
    
}
// create a function to print the node
void print_node(node* head)
{
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
}

// create a function that insert at head
void insert_at_head(node* &head, int val)
{
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
    cout<<"\nHead is inserted"<<endl;
}

// to findOut size
int size(node* head)
{
    node* temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    
    return count;
}
int main()
{
    // create dynamic nodes
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
    int pos;
    cout<<"Enter the position: ";
    cin>>pos;
    int val;
    cout<<"Enter the val: ";
    cin>>val;
    if (pos > size(head))
    {
        cout<<"\nInvalid index"<<endl;
    }
    else if (pos==0)
    {
        insert_at_head(head,val);
    }
    
    else
    {
        insert_at_pos(head, pos,val);
    }

    print_node(head);
    
    return 0;
}