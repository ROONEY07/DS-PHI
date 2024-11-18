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
    
}


int main()
{
    // declare dynamic object of nodes
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);

    // now linked the nodes
    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_pos(head, 3,100);
}