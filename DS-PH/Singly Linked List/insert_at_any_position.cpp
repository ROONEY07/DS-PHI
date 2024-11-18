#include<bits/stdc++.h>
using namespace std;
// create node
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
// create a function to insert node at tail
void tail(node* &head, int val)
{
    // create newNode to insert at tail
    node* newNode = new node(val);

    // handle execption:
    if (head == NULL)
    {
        head = newNode;
        cout<<"\nInserted at head"<<endl;
        return;
    }
    
    // To insert at tail find the tail node
    node* tail = head;
    while (tail->next!= NULL)
    {
        // loop ta node er next, NULL na howa porjontto colbe
        // and tail khejte khejte jabe
        tail = tail->next;
        // tail is founded, node is now in the last
    }
    // now insert the newNode to the tail
    tail->next = newNode;
    cout<<"\nInserted at tail"<<endl<<endl;
    
}

// Create a funtion to insert a newNode in any position
void insert_any_pos(node* head, int pos, int val)
{
    // create newNode to insert any position
    node* newNode = new node(val);
    node* tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }
    
    newNode->next = tmp->next;
    tmp->next = newNode; 
    cout<<"\nInserted position "<<pos<<endl<<endl;
    
}
// create a function to print the node
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
int main()
{
    // create head NOde
    node* head = NULL;
    while (true)
    {
         cout<<"\nOption 1: insert at tail"<<endl;
         cout<<"Option 2: insert at any position"<<endl;
         cout<<"Option 3: Print the Node"<<endl;
         cout<<"Option 4: Terminate"<<endl;
         cout<<"Enter your options: ";
         int op;
         cin>>op;
         if(op==1)
         {
            cout<<"Enter a value: ";
            int val;
            cin>>val;
            tail(head,val);
         }
         else if (op==2)
         {
            int pos;
            cout<<"Enter the position: ";
            cin>>pos;
            int val;
            cout<<"Enter the val: ";
            cin>>val;
            insert_any_pos(head,pos,val);

         }
         else if (op==3)
         {
            print_node(head);
         }
         else if (op==4)
         {
            break;
         }
         
         
         
    }
    
}