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
    cout<<"Linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// insert at tail
void insert_tail(node* &head, int val)
{
    node* newNode = new node(val);
    // if my head is NULL the handle the execptation
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    
    // otherwise
    node* tmp = head;
    while (tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    
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

// print the middle element
void middleListE(node* head)
{
    int n = sizeOfLinked(head);
    int middle = n / 2;

    node* tmp  = head;
    if (n % 2 == 1) // then it would be odd number
    {
        for (int i = 0; i < middle; i++)
        {
            tmp  = tmp->next;
            // go utill findout the middle
        }

        // now print the middle
        cout<<"The middle element is: "<<tmp->val<<endl;
        
    }
    else
    {
        for (int i = 0; i < middle-1; i++)
        {
            tmp = tmp->next;
        }

        // print the middle one where you will find twice value
        cout<<"The middle element is: "<<tmp->val<<" "<<tmp->next->val<<endl;
        
    }
    
}
int main()
{
      node* head = NULL;
      int val;
      cout<<"Enter the val: ";

      while (true)
      {
         cin>>val;
         if(val==-1) break;
         insert_tail(head,val);
      }


      // print the node
      
      middleListE(head);
    //   print_node(head);
}