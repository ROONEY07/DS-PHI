#include<bits/stdc++.h>
using namespace std;
// create node
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

// print the node
void print_node(node* head)
{
    // cout<<"Linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// insert at tail
void insert_tail(node* &head, int val)
{
    node* newNode = new node(val);
    // if my head is NULL the handle the execptation
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    
    // otherwise
    node* tmp = head;
    while (tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    
}

// print the linked list in reverse way
void ReversePrint(node* head)
{
    // base case
    if(head == NULL) return;
    ReversePrint(head->next);
    cout<<head->val<<" ";
    
    
    
}
int main()
{
      node* head = NULL;
      int val;
      cout<<"Enter the val: ";

      while (true)
      {
         cin>>val;
         if(val==-1) break;
         insert_tail(head,val);
      }

      // print the linked list
      print_node(head);
      ReversePrint(head);
      
}