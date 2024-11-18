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
// print the node
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

// insert at tail as optimised way
void insert_at_tail(node* &head, node* &tail, int val)
{
    // create a newNode which you wanna insert at tail
    node* newNode = new node(val);
    // if the head is NULL, then new Node comes first times, so the head and tail will be stand in the 
    // same place...
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // now insert at tail or linked the new node to tail
    tail->next = newNode;
    // and update the tail
    tail = newNode;
}

// print the linked list in descending order
void DescendingOrder(node* head)
{
    node* tmp = head;
    // base case
    if(tmp==NULL) return;
    DescendingOrder(tmp->next);
    cout<<tmp->val<<" ";
}
int main()
{
    node* head = NULL;
    node* tail = NULL;

    // now take a input from the user 
    int val;
    cout<<"Enter the value: ";
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    
    // print the linked list
    print_node(head);

    // now print it as Descending order
    DescendingOrder(head);

}