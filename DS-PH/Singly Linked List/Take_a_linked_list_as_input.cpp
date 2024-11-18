#include<bits/stdc++.h>
using namespace std;
/*
   Linked list a jahatu index nai, tai input newar jonno insert at tail er rules ei input nite hobe.
   so, we need a function that allow us to insert at tail to take a input
*/
// create a node
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
// create a function that allow us to insert at tail
void insert_at_tail(node* &head, int val)
{
    // we need a new node, that wants to insert at tail
    node* newNode = new node(val);

    // it has execption that :
    // jodi head khali thaki tahole insert korar moto kisu thakbe na, next pointer NULL thakbe.
    // NULL er moto value nai , NULL er kono address nai. SO,
    // newNode ke tokhon head kore dite hobe
    if (head==NULL)
    {
        head = newNode;
        return;
    }

    // now to insert at tail, findOut the tail
    node* tail = head;
    while (tail->next!=NULL)
    {
        tail = tail->next;
    }
    // now tail is in the last node, now we can insert the newNOde
    tail->next = newNode;
    // cout<<"\n tail is inserted"<<endl<<endl;
    
    
}
// now to print the linked list, we need a function that allow us to print the linked list
void print_node(node* head)
{
    cout<<"\nYour linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
       cout<<tmp->val<<" ";
       tmp = tmp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    /*
       akta infinite loop calate hobe, thik totokkhon porjonte colbe jokhon na ami off korbo, R
       -1 pailei off hobe
    */
    // At first create a object that has NULL
    node* head = NULL;
    int val;
    cout<<"Enter the val: ";
    while (true)
    {
        
        cin>>val;
        if (val==-1) break;
        else insert_at_tail(head,val);
    }
    print_node(head);
}