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

// create a function that print the middle element of linked list
void printMiddle_element(node* head)
{
    //print the middle element
    int n = size(head);
    int middle_index = n/2;

    // if the linked linked list has odd number then it has single element of middle
    node* tmp = head;
    if (n % 2 == 1 )
    {
        for (int i = 0; i < middle_index; i++)
        {
            tmp = tmp->next;
        }
        cout<<"The middle element is: "<<tmp->val<<endl;
    }
    else
    {
        // then it is obviously even number of linked list and it has two element of the middle
        for (int i = 0; i < middle_index-1; i++)
        {
            tmp = tmp->next;
        }
        cout<<"The middle element is: "<<tmp->val<<" "<<tmp->next->val<<endl;
        
    }
    
    
    
}
int main()
{
    // declare an Head and tail
    node* head = NULL;
    node* tail = NULL;

    // now take input the linked list
    int val;
    cout<<"Enter the val: ";
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }

    // print the linked list
    print_node(head);

    // now print the middle element of linked list
    printMiddle_element(head);


    
    
    
}