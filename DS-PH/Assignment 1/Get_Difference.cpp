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

// declare a size of linked list
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

    //take input from the user
    int val;
    // cout<<"Enter the val: ";
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }

    // the size of link list
    int n = size(head);

    node* tmp = head;
    int max = INT_MIN;
    int min = INT_MAX;

    // for max value and min value
    for (int i = 0; i < n; i++)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        
        tmp = tmp->next;
        
    }
    

    // the difference between min and max
    int diff = max -min;
    cout<<diff<<endl;
    
}