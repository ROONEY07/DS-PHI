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
// print the nodes
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
// insert at tail in optimised way or in o(1) way
void insert_at_tail(node* &head, node* &tail, int val)
{
    // to insert at tail in optimised way, we need to hold the tail so that, the loop runs once
    // create a node which i wanna insert at tail
    node* newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // now insert at tail
    tail->next = newNode;
    // now update the tail
    tail = newNode;
    
}
int main()
{
    // declare nodes
    // assume that, node thaki khali, jahatu node ta khali, tai newNode ta akbarei asche, jahatu newNode
    // ta akbarei asche, tai head and tail duitai khali thakbe
    node* head = NULL;
    node* tail = NULL;

    // take input the value..
    int val;
    cout<<"Enter the val: ";
    while (true)
    {
        cin>>val;
        if (val==-1) break;
        insert_at_tail(head,tail,val);
        
    }
    print_node(head);

    // now sort the value
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
       
    //           if (a[i] > a[j])
    //           {
    //               swap(a[i],a[j]);
    //           }
              
    //     }
        
    // }

    for (node* i = head; i->next!=NULL; i = i->next) // i colbe last node porjontto, orthat NULL na pwa porjontto
    {
        // last node hocce amn akta node, jar next a NULL ache..
        for (node* j = i->next; j!=NULL; j = j->next) // same j o colbe NULL na pawa porjontto
        {
       
              if (i->val > j->val)
              {
                  swap(i->val, j->val);
              }
              
        }
        
    }


    // print the node
    print_node(head);
    
}