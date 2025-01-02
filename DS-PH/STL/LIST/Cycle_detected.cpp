#include<bits/stdc++.h>
using namespace std;
// create node for doubly linked list
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
int main()
{
    // declare node
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    
    // linked the node
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;
    
    node* slow = head;
    node* fast = head;
    bool found = false;
    while (fast!=NULL && fast->next!=NULL)
    {
         slow = slow->next;
         fast = fast->next->next;
         if (slow==fast)
         {
            found = true;
            break;
         }
         
    }
    
    if(found==true) cout<<"Cycle detected";
    else cout<<"Cycle not detected";

    
}