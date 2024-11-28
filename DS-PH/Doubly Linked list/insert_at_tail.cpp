#include<bits/stdc++.h>
using namespace std;

// Create doubly 
class node 
{
    public:
    int val;
    node* pre;
    node* next;

    // constructor
    node(int val)
    {
         this->val = val;
         this->next = NULL;
         this->pre = NULL;
    }
};

// print the node
void PrinNode(node* head)
{
    cout<<"Forward Print: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// print the doubly linked list in reverse way
void ReversePrint(node* tail)
{
     // print the doubly linked list in reverse way
     // hold the tail
     cout<<"Reverse Print: ";
     node* tmp = tail;
     while (tmp!=NULL)
     {
        cout<<tmp->val<<" ";
        tmp = tmp->pre;
     }
     cout<<endl;

}
// insert at tail
void insert_tail(node* &head, node* &tail, int val)
{
     // create a new node that insert at tail
     node* newNode = new node(val);
     // assume that my head is null then tail obisouly tail. for that head and tail both node is now in same position. that means, head and tail should be in newNode
     if (tail == NULL)
     {
        head = newNode;
        tail = newNode;
        return;
     }
     
     // otherwise insert at tail
     tail->next = newNode;
     newNode->pre = tail;

     // and update the tail
     tail = newNode;
     
}
// insert any position
void insert_any_pos(node* head, int pos, int val)
{
    // create a new Node that wanna insert at any position
    node* newNode = new node(val); 
    node* tmp = head;
    for (int i = 1; i <=pos-1; i++)
    {
        tmp = tmp->next;
    }

    // now insert that newNode
    newNode->next = tmp->next;
    tmp->next = newNode;

    newNode->next->pre = newNode;
    newNode->pre = tmp;
    

}
int main()
{
    // Declare an node
    // node* head = new node(10);
    // node* a = new node(20);
    // node* b = new node(30);
    // node* c = new node(40);

    // // trac the tail
    // node* tail = c;

    // // now linked the node
    // head->next = a;
    // a->pre = head;

    // a->next = b;
    // b->pre = a;

    // b->next = c;
    // c->pre = b;


    // assume that my head and tail is NULL
    node* head = NULL;
    node* tail = NULL;


    int val;
    cout<<"Enter the value: ";
    while (cin>>val && val!=-1)
    {
        insert_tail(head,tail,val);
    }

    // print the node
    PrinNode(head);
    
}