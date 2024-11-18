#include<bits/stdc++.h>
using namespace std;
// creates node
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

//insert at tail in optimised way
void insert_at_tail(node* &head, node* &tail, int val)
{
    // create a newNode which you wanna insert at tail
    node* newNode = new node(val);
    // akon suppose head jodi khali thake, tahole newNode first time asbe. r newNode first time asle
    // head and tail duitai akoi jaigai thakbe NULL a;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    // and now linked the newNode to tail, becasue we are hold the tail
    tail->next = newNode;
    // now update the tail
    tail = newNode;
      
}

// to find the size of linked list
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
    // creates a nodes
    node* head = NULL;
    node* head2 = NULL;
    node* tail = NULL;

    // now take input the linked list
    // linked list er kono specific size hoi na
    int val;
    cout<<"Enter the val for linked list 1: ";
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    print_node(head);
    

}