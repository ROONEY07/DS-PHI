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
    
    // otherwise insert at tail
    tail->next = newNode;
    // and update the tail
    tail = newNode;
    
}

// delete head
void delete_head(node* &head)
{
    // first store head so that we can delete
    node* deleteHead = head;
    head = head->next;
    delete deleteHead;
}

// delete ant position
void delete_any_pos(node* head, int pos)
{
    node* tmp = head;
    // to delete a specific position . for that go to that pos
    for (int i = 1; i <=pos-1; i++)
    {
        tmp = tmp->next;
    }
    
    // now we can delete, but to delete that node, 1st store that node
    node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    // now delete the node
    delete deleteNode;
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

      
      // delete operation
      int X;
      cout<<"Enter the position to delete: ";
      cin>>X;
      if (X < 0 || X > size(head))
      {
         cout<<"Invalid position"<<endl;
      }
      else if (X == 0)
      {
         delete_head(head);
      }
      else
      {
        delete_any_pos(head,X);
      }
      
      
    // print the node
    print_node(head);
}