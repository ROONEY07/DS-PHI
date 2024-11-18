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

// create a function that delete from singly list
void delete_from_pos(node* head, int pos)
{
    // amk delete from position er jonno, je ghor ke delete korte cai er ager ghore aste hobe
    node* tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }

    // now store a node which i wanna delete
    node* deleteNode = tmp->next;
    // now linked the nodes
    tmp->next = tmp->next->next;
    // now delete the nodes
    delete deleteNode;

    cout<<"\nDelete from pos "<<pos<<endl;

    
}

// delete from head
void delete_head(node* &head)
{
    // first store the head, then you can delete it
    node* deleteHead = head;
    head = head->next;
    delete deleteHead;
}

// print the nodes
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

// size of linked list
int size(node* head)
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
     // declare dynamic nodes
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
    

    // print the node
    print_node(head);
    //inserted at specific position
    int pos;
    cout<<"Enter the pos: ";
    cin>>pos;
    if (pos >= size(head))
    {
       cout<<"\nInvalid index"<<endl;
    }
    else if (pos==0)
    {
        delete_head(head);
    }
    else
    {
        delete_from_pos(head,pos);
    }

    print_node(head);
    
}