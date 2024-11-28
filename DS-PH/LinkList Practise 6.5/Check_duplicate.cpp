#include<bits/stdc++.h>
using namespace std;
// create linked list
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

// print the linked list
void print_node(node* head)
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
void insert_tail(node* &head, int val)
{
     node* newNode = new node(val);
     // if head is null
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

// size of linked list
int sizeOfLinkedlist(node* head)
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
       node* head = NULL;

       int val;
       cout<<"Enter the val: ";
       while (true)
       {
          cin>>val;
          if (val==-1) break;
          insert_tail(head,val);
          
       }
    //    print_node(head);
    
     bool found = false;
     int n = sizeOfLinkedlist(head);
     node* tmp = head;
     for (node* i = head; i != NULL; i = i->next)
     {
         for (node* j = i->next; j != NULL; j = j->next)
         {
              if (i->val==j->val)
              {
                 found = true;
                 break;
              }
              
         }
         
     }

     if (found==true)
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }
     
     
     
}