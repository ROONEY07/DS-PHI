#include<bits/stdc++.h>
using namespace std;
// create nodes
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
// print the node
void print_node(node* head)
{
    cout<<"\nYour linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// insert at tail as optimised way
void insert_at_tail(node* &head, node* &tail, int val)
{
    // create a newNode which you wanna insert at tail
    node* newNode = new node(val);
    // if the head is NULL, then new Node comes first times, so the head and tail will be stand in the 
    // same place...
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // now insert at tail or linked the new node to tail
    tail->next = newNode;
    // and update the tail
    tail = newNode;
}

// size of link list
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

    // take a value from user
    int val;
    cout<<"Enter the value of linked list: ";

    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    print_node(head);
    
    /*
     
    int count[100]={0};

    for (int i = 0; i < size; i++)
    {
        count[a[i]]++;
    }

     bool duplicate = false;
    for (int i = 0; i <= maxVal; i++)
    {
        if (count[i] > 1)
        {
            duplicate= true;
            break;
        }
        
    }
    */

   int count[100] = {0};

   node* tmp = head;
   while (tmp!=NULL)
   {
       int i = tmp->val;
       count[i]++;
       tmp = tmp->next;
   }
   

   bool duplicate = false;
   for (int i = 0; i < 100; i++)
   {
       if (count[i] > 1)
       {
          duplicate = true;
          break;
       }
       
   }
   

   if (duplicate==true)
   {
      cout<<"YES"<<endl;
   }
   else
   {
     cout<<"NO"<<endl;
   }
   
   
}