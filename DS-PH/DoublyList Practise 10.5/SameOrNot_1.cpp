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
int main()
{
      // declare node 1
      node* head1 = NULL;
      node* tail1 = NULL;

      // take input the node
      int val;
      cout<<"Enter the val for node 1: ";
      while (cin>>val && val!=-1)
      {
          insert_tail(head1,tail1,val);
      }
    
      // declare node 2
      node* head2 = NULL;
      node* tail2 = NULL;
      cout<<"Enter the val for node 2: ";
      while (cin>>val && val!=-1)
      {
          insert_tail(head2,tail2,val);
      }
      
      
      // print the node 1
      cout<<endl;
      PrintNode(head1);
      // print the node 2
      PrintNode(head2);
      
      cout<<endl;
      


    //   find the two nodes are same or not
     node* tmp1 = head1;
     node* tmp2 = head2;

     bool equal  = true;
     while (tmp1!=NULL && tmp2!=NULL)
     {
        if (tmp1->val !=tmp2->val)
        {
            equal = false;
            break;
        }
        else
        {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        
        
     }
     
      
      if (equal && tmp1==NULL && tmp2==NULL) // duita akoi jaigai sesh hote hobe
      {
        cout<<"They are same"<<endl;
      }
      else
      {
        cout<<"Not same"<<endl;
      }
      
      
      
}