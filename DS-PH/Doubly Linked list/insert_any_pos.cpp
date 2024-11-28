#include<bits/stdc++.h>
using namespace std;

// Create doubly 
class node 
{
    public:
    int val;
    node* pre;
    node* next;

    // constructor
    node(int val)
    {
         this->val = val;
         this->next = NULL;
         this->pre = NULL;
    }
};

// print the node
void PrintNode(node* head)
{
    cout<<"Forward Print: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// print the doubly linked list in reverse way
void ReversePrint(node* tail)
{
     // print the doubly linked list in reverse way
     // hold the tail
     cout<<"Reverse Print: ";
     node* tmp = tail;
     while (tmp!=NULL)
     {
        cout<<tmp->val<<" ";
        tmp = tmp->pre;
     }
     cout<<endl;

}
// insert at tail for doubly linked list
void insert_tail(node* &head, node* &tail, int val)
{
     // create a new node that insert at tail
     node* newNode = new node(val);
     // assume that my head is null then tail obisouly tail. for that head and tail both node is now in same position. that means, head and tail should be in newNode
     if (tail == NULL)
     {
        head = newNode;
        tail = newNode;
        return;
     }
     
     // otherwise insert at tail
     tail->next = newNode;
     newNode->pre = tail;

     // and update the tail
     tail = newNode;
     
}

// insert at head
void insert_head(node* &head, node* &tail, int val)
{
     // create a newNode that insert at head
     node* newNode = new node(val);
     if (head==NULL)
     {
        head = newNode;
        tail = newNode;
        return;
     }

     // otherwise insert at head
     newNode->next = head;
     head->pre = newNode;
     head = newNode;
     
}
// insert at any position in doubly linked list
void insert_any_pos(node* head, int pos, int val)
{
    // create a new node that insert at any position
    node* newNode = new node(val); 
    node* tmp = head;
    
    for (int i = 1; i <=pos-1; i++)
    {
        tmp = tmp->next;
    }
    
    //  insert the new node at that position
    newNode->next = tmp->next;
    tmp->next = newNode;

    newNode->next->pre = newNode;
    newNode->pre = tmp;
}

// size of linked list
int sizeOfLinked(node* head)
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

    // assume that my head and tail is NULL
    node* head = NULL;
    node* tail = NULL;


    int val;
    cout<<"Enter the value: ";
    while (cin>>val && val!=-1)
    {
        insert_tail(head,tail,val);
    }
   
    
    int X, V;
    cout<<"Enter the pos and val: ";
    cin>>X>>V;
    if (X > sizeOfLinked(head))
    {
       cout<<"Invalid index"<<endl;
    }
    else if (X == 0)
    {
        insert_head(head,tail,V);
    }
    else if (X == sizeOfLinked(head))
    {
        insert_tail(head,tail,V);
    }
    else
    {
       insert_any_pos(head,X,V); 
    }
    
    
    
    
    
    PrintNode(head);
    ReversePrint(tail);
    
    
}