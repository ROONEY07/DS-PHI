#include<bits/stdc++.h>
using namespace std;
// create node for doubly linked list
class node 
{
    public:
    int val;
    node* next;
    node* prev;

    // constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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

// print it in reverse
void print_rev(node* tail)
{
    node* tmp = tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
    
}


// insert at tail
void insert_tail(node* &head, node* &tail, int val)
{
      // create a node that insert at tail
      node* newNode = new node(val);
      if (tail==NULL)
      {
        head = newNode;
        tail = newNode;
        return;
      }

      // otherwise insert at tail
      tail->next = newNode;
      newNode->prev = tail;

      // and the update the tail
      tail = newNode;
      
}

// print doubly linked list with two pointer techinque
void print_revsere(node* head, node* tail)
{
      node* i = head;
      node* j = tail;
      while (i!=j && i->next!=j)
      {
           swap(i->val,j->val);
           i = i->next;
           j = j->prev;
      }
      
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
    printNode(head);
    // print_rev(tail);
    print_revsere(head,tail);
    printNode(head);
    
}