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
// insert_at_tail
void insert_at_tail(node* &head, node* &tail, int val)
{
    // create nodes which we wanna insert at tail
    node* newNode = new node(val);
    // if the head is  NULL , then the newnode is coming first times
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // now linked at tail
    tail->next = newNode;
    tail = newNode;
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
int main()
{
    // declare node
    node* head = NULL;
    node* tail = NULL;

    int val;
    cout<<"Enter the value: ";

    while (true)
    {
        cin>>val;
        if (val==-1) break;
        insert_at_tail(head,tail,val);
        
    }
    print_node(head);

}