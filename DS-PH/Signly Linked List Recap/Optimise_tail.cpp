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
// print the node
void print_node(node* head)
{
     cout<<"\nYour linked list is: ";
     // now store the head so that it don't get's lost
     node* tmp = head;
     while (tmp!=NULL)
     {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
     }
     cout<<endl;
     
}


//insert at position by creating function
void insert_at_pos(node* &head, int pos, int val)
{
    // create a node which you wanna insert at any position
    node* newNode = new node(val);
    // now store head so that it did't get's lost
    node* tmp = head;

    // Handle the error, if i wanna insert at head, then it show error. 
    if(head==NULL)
    {
        head = newNode;
        cout<<"\nHead is inserted"<<endl;
        return; 
    }

    // now if you wanna insert at specific position, then you have to return back 1 nodes
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }
    // now we are one step behind the specific position
    // now insert the nodes
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<"\nInserted at position "<<pos<<endl;
    
}

// insert at head
void insert_at_head(node* &head,int val)
{
    // create a newNode to insert at head
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
    cout<<"\nInserted at head"<<endl;
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


// insert at tail in optise way
// optisemed way te tail insert korar jno, se head, tail , value received kore
// jahatu insert at tail ke amora optimise korbo, tai tail ke dhore rakha lagbe, tai se tail o receive kore
void insert_at_tail(node* &head, node* &tail, int val)
{
    // create a newNOde which we wanna insert at tail
    node* newNode = new node(val);
    // jodi head NULL thake tahole, node ta first time asce, node ta first time asle, head and tail akoi
    // jaigai thkabe, So,
    if (head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // now insert at tail and update the tail, because, when the  newNode insert at tail. then the new
    // node become tail
    tail->next = newNode;
    // update the tail
    tail = newNode;
    cout<<"\nInserted at tail"<<endl;
    
}
int main()
{
    // declare dynamic nodes
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    node* d = new node(50);

    // hold the tail
    node* tail = d;


    // now linked the nodes
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    //inserted at specific position
    int pos;
    cout<<"Enter the pos: ";
    cin>>pos;
    int val;
    cout<<"Enter the val: ";
    cin>>val;
    
    // if i gonna insert nodes out of the size, then it gonna show me error. TO handle this error
    // we have to know first size of the linked list
    if (pos > size(head))
    {
       cout<<"\nInvalid indez"<<endl;
    }
    else if (pos==0)
    {
       insert_at_head(head,val);
    }
    else if (pos==size(head))
    {
         insert_at_tail(head,tail,val);
    }
    
    else 
    {
        insert_at_pos(head,pos,val);
    }
    
    print_node(head);

    
}