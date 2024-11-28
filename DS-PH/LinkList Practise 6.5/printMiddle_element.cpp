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

// print node
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

// size of the linked list
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

// insert at tail
void insert_tail(node* &head, int val)
{
    // create a newNode to insert at tail
    node* newNode = new node(val);
    if (head==NULL)
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

// middle element
void PrintMiddle(node* head)
{
     int n = sizeOfLinked(head);
     int middle = n/2;
     node* tmp = head;
     if (n % 2 == 1) // if the size of n is odd then the middle element will be single
     {
        
        for (int i = 0; i < middle; i++)
        {
            tmp = tmp->next; 
            // go in the middle index
        }
        // and print it
        cout<<"The middle element is: "<<tmp->val<<endl;
     }
     else // otherwise the middle element will be double
     {
        for (int i = 0; i < middle-1; i++)
        {
            // the go till middle -1 and find the middle
            tmp = tmp->next ;
        }

        // and print the middle element
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
    print_node(head);
    PrintMiddle(head);
}