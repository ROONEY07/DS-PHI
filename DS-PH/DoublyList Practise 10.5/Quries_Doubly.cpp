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

// print it in reverse
void print_reverse(node* tail)
{
    node* tmp = tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
    
}
// insert at any position
void insert_any_pos(node*head, int pos, int val)
{
    // create a newNode that insert at any position
    node* newNode = new node(val);
    // jodi head 0 thake tahole 

    // otherwise insrt any position
    node* tmp = head;
    for (int i = 1; i <=pos-1; i++)
    {
        tmp = tmp->next;
        
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    newNode->next->prev = newNode;
    newNode->prev = tmp;
 
}

// size of linked list
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

// insert head
void insert_head(node* &head, node* &tail, int val)
{
    // create a newNode to insert at head
    node* newNode = new node(val);
    if (head == NULL)
    {
       head = newNode;
       tail = newNode;
       return;
    }
    
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}
int main()
{
      // declare node 1
      node* head = NULL;
      node* tail = NULL;

      
      int Q;
      cout<<"Entert the number of Quries: ";
      cin>>Q;
      while (Q--)
      {
           int X,V;
           cout<<"Enter the index and value: ";
           cin>>X>>V;
           if (X < 0 || X > size(head))
           {
              cout<<"Invalid position"<<endl;
           }
           else if (X == size(head))
           {
               insert_tail(head,tail,V);
           }
           else if (X == 0)
           {
               insert_head(head,tail,V);
           }
           else
           {
            insert_any_pos(head,X,V);
           }
           
           
          // print the node
          PrintNode(head);
          // print the node in reverse
          print_reverse(tail);
      }
      
      
     
     
      
      
      
}