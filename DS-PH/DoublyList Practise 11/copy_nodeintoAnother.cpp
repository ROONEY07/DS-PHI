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
      node* tail = NULL;
      
      int val;
      cout<<"Enter the val: ";

      while (true)
      {
         cin>>val;
         if(val==-1) break;
         insert_tail(head,tail,val);
      }

      
      // copy node into another node
      node* newHead = NULL;
      node* newTail = NULL;

      // to copy the node into newNode so that we pass the head of our first node
      node* tmp = head;
      while (tmp!=NULL)
      {
         insert_tail(newHead,newTail,tmp->val);
         tmp = tmp->next;
      }

      // print the copy node
      print_node(newHead);
      
      
}