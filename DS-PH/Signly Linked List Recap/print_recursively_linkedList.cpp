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

// print nodes
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

// create recuisive function
void recursion(node* n)
{
    // ami akta print kore recursion ke bolbo, tmi baki gulo print kore niya aso
    // base case hobe, totokkhon porjontto print koro jotokkhon na NULL paiso
    if(n==NULL) return;
    recursion(n->next);
    cout<<n->val<<" ";
    

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
    recursion(head);
}