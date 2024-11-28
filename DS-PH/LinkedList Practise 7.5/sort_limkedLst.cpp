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
void print_node(node* head)  // O(N)
{
    cout<<"Linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    
}

// insert at tail
void insert_tail(node* &head, node* &tail, int val)     
{
    node* newNode = new node(val);
    // if my head is NULL the handle the execptation

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    // otherwise there is a value and tail .
    // so insert at tail
    tail->next = newNode;

    // now update the tail
    tail = newNode;
    
    
}

// sort the linked list
void sort_list(node* head)
{
     for (node* i = head; i->next!=NULL; i = i->next)
     {
        for (node* j = i->next; j!=NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
            
        }
        
     }
     
    // called the print function
    print_node(head);
}
int main()
{
      node* head = NULL;
      node* tail = NULL;

      int val;
      cout<<"Enter the val: ";

      while (true)
      {
         cin>>val;
         if(val==-1) break;
         insert_tail(head,tail,val);
      }
      

      // call the sort function
      sort_list(head);
}