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

// create a node to print the linked list
void nodePrint(node* head)
{
    // cout<<"linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;

    }
    cout<<endl;
    
}

// create a function to insert at tail
void insert_tail(node* &head, int val)
{
     // create a new node to insert at tail
     node* newNode = new node(val);

     if (head ==  NULL)
     {
        head = newNode;
        return;
     }

     // otherwise insert at tail, for that, at first findOut the tail node
     node* tmp = head;
     while (tmp->next!=NULL)
     {
        tmp = tmp->next;
        // tail node is founded
     }
     
     // now insert the newNode to tail
     newNode->next = tmp->next;
     tmp->next = newNode;
}

// create a function to findOut the size
int sizofLinked(node* head)
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
      // declare a linked list
      node* head1 = NULL;
      node* head2 = NULL;
      int val1;
      cout<<"Enter the val for linked list 1: ";
      while (true)
      {
          cin>>val1;
          if(val1==-1) break;
          insert_tail(head1,val1);
      }
      
      
      int val2;
      cout<<"Enter the val for linked list 2: ";
      while (true)
      {
          cin>>val2;
          if(val2==-1) break;
          insert_tail(head2,val2);
      }

     // print the node

    //  cout<<endl;
    //  cout<<"linked list 1 is: ";
    //  nodePrint(head1);
    //  cout<<"linked list 2 is: ";
    //  nodePrint(head2);


     // now count their size
     int size_of_linkedlist1 = sizofLinked(head1);
     int size_of_linkedlist2 = sizofLinked(head2);

     // print their size
     cout<<endl;
     cout<<"The size of linked list 1 is: "<<size_of_linkedlist1<<endl;
     cout<<"The size of linked list 2 is: "<<size_of_linkedlist2<<endl;

     cout<<endl;
     if (size_of_linkedlist1 == size_of_linkedlist2)
     {
        cout<<"Same"<<endl;
     }
     else
     {
        cout<<"Not same"<<endl;
     }
     
     
}