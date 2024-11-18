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

// create a function to print the size
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

    // now take a input for linked list from user
    int val;
    cout<<"Enter the val: ";
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    
    // store the size of linked list in int variable
    int n = size(head);
    node* tmp = head;

    // the middle
    int middle = n/2;
    // now print the middle element of the lined list
    
        if (n % 2 == 1)
        {
            // then the linked list is odd number, then the middle element of linked must be single
            // then start a loop to middle
            for (int i = 0; i < middle; i++)
            {
                tmp = tmp->next;
            }
            
            cout<<"The middle element of linked list: "<<tmp->val<<endl;
        }
        else
        {
            // the linked list is even number of, then the linked list must be double
            for (int i = 0; i < middle-1; i++)
            {
                tmp = tmp->next;
            }
            
            cout<<"The middle element of linked list is: "<<tmp->next->val<<" "<<tmp->val<<endl;
        }
    
    
    
    
    
    
}