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


// create recursive function that print the linked list accessding order
void recursion(node* head)
{
    node* tmp = head;
    // create base case
    if(tmp==NULL) return;
    recursion(tmp->next); 
    cout<<tmp->val<<" ";
    

}
int main()
{
    node* head = NULL;
    node* tail = NULL;

    // take the input of linked list
    int val;
    cout<<"Enter the linked list: ";
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    // print the linked list
    print_node(head);
    // print in the sorted way
    recursion(head);
    
}