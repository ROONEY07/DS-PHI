#include<bits/stdc++.h>
using namespace std;
// declare node
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


// reverse method singly
// for that, akta duita head asbe, 1st head ta reference akare jabe akta 2nd head ta current akare jabe
void recursively_reverse(node* &head, node* curruent)
{
     // base case
     if (curruent->next==NULL)
     {
       head = curruent;
       return;
     }

     // call the recursive function
     recursively_reverse(head,curruent->next); // find the current that currecnt if null or not
     curruent->next->next = curruent;
     // present current ke null kore daw
     curruent->next = NULL;

     
}
int main()
{
      // declare node
      node* head = NULL;
      node* tail = NULL;

      // take input the node
      int val;
      cout<<"Enter the val: ";
      while (cin>>val && val!=-1)
      {
          insert_tail(head,tail,val);
      }

      // print the node
      PrintNode(head);
      // print the singly linked list in reverse
      recursively_reverse(head,head);
      // print the node
      PrintNode(head);

     

      
}