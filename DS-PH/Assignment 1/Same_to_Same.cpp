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
    node* head1 = NULL;
    node* head2 = NULL;
    node* tail1 = NULL;
    node* tail2 = NULL;

    //take input for the first linked list
    int val;
    // cout<<"Enter the val: ";
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head1,tail1,val);
    }

    // take input for the secound linked list
    //take input from the user
    int val2;
    // cout<<"Enter the val2: ";
    while (true)
    {
        cin>>val2;
        if(val2==-1) break;
        insert_at_tail(head2,tail2,val2);
    }
    
    // // print the first linked list
    // print_node(head);
    // // print the secound linked list
    // print_node(head1);


    // now check the two linked list's element same or not
    node* tmp1 = head1;
    node* tmp2 = head2;
    bool compare = true;
    while (tmp1!=NULL && tmp2!=NULL)
    {
        // compare current node value
        if (tmp1->val != tmp2->val)
        {
            compare = false;
            break;
        }
        
        // move the nodes
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
        
    }
    

    // now check the length
    if (tmp1!=NULL || tmp2!=NULL)
    {
        compare = false;
    }
    
    if (compare == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    
    
    

   
    

}