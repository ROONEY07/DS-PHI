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
     // create a new node that insert at tail
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


// print the middle element
void middle_element(node* head)
{
     node* tmp = head;
     int middle = size(head)/2;

     if (size(head) % 2 == 1) // if the nodes is odd number then the middle element 1
     {
        for (int i = 0; i < middle; i++)
        {
            tmp = tmp->next;
        }
        cout<<"The middle element is: "<<tmp->val<<endl;
      //   return tmp->val;
     }
     else                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
     {
         for (int i = 0; i < middle -1 ; i++)
         {
            tmp = tmp->next;
         }
         cout<<"The middle element is: "<<tmp->val<<" "<<tmp->next->val<<endl;
      //   return tmp->val, tmp->next->val;
     }
     
         
}
int main()
{
       // declare a node
       node* head = NULL;
       node* tail = NULL;

       // take input the nodes
       int val;
       cout<<"Enter the val: ";
       while (cin>>val && val!=-1)
       {
           insert_tail(head,tail,val);
       }
       
       // insert at tail
       printNode(head);
       middle_element(head);
}