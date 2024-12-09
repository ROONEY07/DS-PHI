#include<bits/stdc++.h>
using namespace std;

// create node
class node 
{
    public:
    int val;
    node* next;
    // consturctor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// print the node
void printNode(node* head)
{
   node* tmp = head;
   while (tmp!=NULL)
   {
       cout<<tmp->val<<" ";
       tmp = tmp->next;
   }
   cout<<endl;
   
}

// insert at tail
void insert_tail(node* &head, node* &tail, int val)
{
    // create a neNode that insert at tail
    node* newNode = new node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // otherwise insert at tail
    tail->next = newNode;

    // update the tail
     tail = newNode;
    
    
}

// Remove duplicate from sorting  
void remove_dup(node* head)
{
     node* current = head;
     if(head == NULL) return;

     while (current->next!=NULL)
     {
          if (current->val == current->next->val)
          {
                // then first store the 2nd node and delete it
                node* dup = current->next;
                // and before delete ager node er sathe porer node ke connect koro
                current->next = current->next->next;

                // now delete the node
                delete dup;
          }
          else
          {
               // otherwise find the nodes
               current = current->next;
          }
          
          
     }
    
    // print the nodes
    printNode(head);
     
}
int main()
{
     // declare node
     node* head = NULL;
     node* tail = NULL;

     // take input the nodes
     int val;
     cout<<"Enter the val: ";
     while (cin>>val && val!=-1)
     {
        insert_tail(head,tail,val);
     }

     printNode(head);
     remove_dup(head);
     
     
}