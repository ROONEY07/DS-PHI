#include<bits/stdc++.h>
using namespace std;
// create node
class node 
{
    public:
    int val;
    node* next;
    node* prev;

    // constructor
    node(int val)
    {
        this->val = val;
        // initial stage a amar next and prev pointer NULL thakbe
        this->next = NULL;
        this->prev = NULL;
    }
};

// create a function that return the size of linked list
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

// print the node in Forward way
void F_printNode(node* head)
{
    cout<<"\nForwad linked list: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
}

// Print the node in Reverse way
void R_printNode(node* tail)
{
    cout<<"Reverse linked list: ";
    node* tmp = tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
    
}

// insert at tail
void insert_tail(node* &head, node* &tail, int val)
{
    // create a newNode that insert at tail
    node* newNode = new node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // otherwise insert at tail
    tail->next = newNode;
    newNode->prev = tail;

    // update the tail
    tail = newNode;
}

// delete any position
void delete_any_pos(node* head, int pos)
{
     if(head == NULL) return;
     // otherwise delete any pos
    
     node* tmp = head;
     for (int i = 1; i <=pos-1; i++)
     {
        tmp = tmp->next;
     }

     // first store that node
     node* deleteNode = tmp->next;

     tmp->next = tmp->next->next;
     tmp->next->prev = tmp;

     // now delete that node
     delete deleteNode;
     
}
// Delete the tail
void delete_tail(node* &tail)
{

    if(tail == NULL) return;

    // store the tail node so that it can delete
    node* deletetail = tail;
    // update the tail, becase if the tail is deleted then previos node should be tail
    tail = tail->prev;

    // delete the tail
    delete deletetail;

    // as the tail is deleted , new node next adress give me garbage value
    // for that it should be set the null
    tail->next = NULL;
}

// delete the head
void delete_head(node* &head)
{
    // if the head is null , then there is nothing to delete
    if(head == NULL) return;

    // first store the head, so that it can be deleted
    node* delete_head = head;
    // now move the head in the next node
    head = head->next;
    head->prev = NULL;

    // now delete the head
    delete delete_head;
}
int main()
{
    // Declare node
    node* head = NULL;
    node* tail = NULL;

    // take input the linked list
    int val;
    cout<<"Enter the val: ";
    while (cin>>val && val!=-1)
    {
        insert_tail(head,tail,val);
    }
    

    int pos;
    cout<<"Enter the pos: ";
    cin>>pos;

    if (pos < 0 ||pos > size(head))
    {
        cout<<"Invalid position"<<endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos == (size(head)-1))
    {
        delete_tail(tail);
    }
    else
    {
        delete_any_pos(head,pos);
    }

    // delete_any_pos(head,pos);
    
    
    

    // print the linked list
    F_printNode(head);
    R_printNode(tail);
}