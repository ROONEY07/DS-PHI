#include<bits/stdc++.h>
using namespace std;

// create nod
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

// insert at tail
void insert_tail(node* &head,node* &tail,int val)
{
     // create a newNode that insert at tail
     node* newNode = new node(val);
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

// print the node
void printNode(node* head)
{
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
}

// reverse the double linked list
void reverse_double(node* head, node* tail)
{
    node* i = head;
    node* j = tail;
    while (i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
    //  jodi duita value thake tahole loop a dukbe na, jeita nij hate swap kora lagbe
    swap(i->val,j->val);
}
int main()
{
    // declare node
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
    printNode(head);

    // reverse the node
    reverse_double(head,tail);

    // print the node
    printNode(head);    
}