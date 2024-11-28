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
int main()
{
    // Declare an node
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);

    // trac the tail
    node* tail = c;

    // now linked the node
    head->next = a;
    a->pre = head;

    a->next = b;
    b->pre = a;

    b->next = c;
    c->pre = b;


    // now print the node
    PrinNode(head);
    // cout<<endl;
    ReversePrint(tail);
}