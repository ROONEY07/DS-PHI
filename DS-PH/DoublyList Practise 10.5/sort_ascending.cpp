#include<bits/stdc++.h>
using namespace std;
// declare node
class node 
{
    public:
    int val;
    node* next;
    node* prev;
    //constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// take insert at tail
void insert_tail(node* &head,node* &tail,int val)
{
     // create a node that insert at tail
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

     // and update the tail
     tail = newNode;
     
}

// print the node
void PrintNode(node* head)
{
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
}

// sort the linked list
void sort_doubly(node* &head)
{
    for (node* i = head; i!=NULL; i = i->next)
    {
        for (node* j = i->next; j!=NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val,j->val);
            }
            
        }
        
    }
    
}
int main()
{
      // declare node 1
      node* head = NULL;
      node* tail = NULL;

      // take input the node
      int val;
      cout<<"Enter the val: ";
      while (cin>>val && val!=-1)
      {
          insert_tail(head,tail,val);
      }
    
      PrintNode(head);
      sort_doubly(head);
      PrintNode(head);
     
     
      
      
      
}