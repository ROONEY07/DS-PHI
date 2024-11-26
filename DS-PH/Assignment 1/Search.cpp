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
    
}

// insert at tail
void insert_tail(node* &head, node* &tail, int val)     
{
    node* newNode = new node(val);
    // if my head is NULL the handle the execptation

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    // otherwise there is a value and tail .
    // so insert at tail
    tail->next = newNode;

    // now update the tail
    tail = newNode;
    
    
}
// search the linked list
int SearchItem(node* head, int X)
{
     int CurrentIndex = 0;
     node* tmp = head;
     while (tmp!=NULL)
     {
         if (tmp->val == X)
         {
            return CurrentIndex;
         }
         tmp = tmp->next;
         CurrentIndex++;
     }
     
     
    return -1;
    
}

int main()
{
    
    int test;
    cin >> test;

    // Search for each test case
    for (int t = 1; t <= test; t++)
    {
        node* head = NULL;
        node* tail = NULL;

        int val;
        // Take input for the linked list
        while (true)
        {
            cin >> val;
            if (val == -1) break;  
            insert_tail(head, tail, val);
        }
 
        // called the function
        // SearchItem(head);  // Search for the value in the linked list
        int x;
        cin>>x;
        cout<<SearchItem(head,x);
        cout<<endl;
   
    }

    return 0;
}