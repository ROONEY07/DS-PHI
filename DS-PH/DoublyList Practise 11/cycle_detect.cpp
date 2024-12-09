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
void printNode(node* head)
{
     node* tmp = head;
     while (tmp!=NULL)
     {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
     }
     cout<<endl;
     
}

// insert at tail
void insert_tail(node* &head, node* &tail, int val)
{
     // create a new node that insert at tail
     node* newNode = new node(val);
     if (tail == NULL)
     {
        head = newNode;
        tail = newNode;
        return;
     }

     // otherwise insert at tail
     tail->next = newNode;

     // update the tail
     tail = newNode;
     
}


int main()
{
    //    // declare a node
    //    node* head = NULL;
    //    node* tail = NULL;

    //    // take input the nodes
    //    int val;
    //    cout<<"Enter the val: ";
    //    while (cin>>val && val!=-1)
    //    {
    //        insert_tail(head,tail,val);
    //    }


        node* head = new node(10);
        node* a = new node(20);
        node* b = new node(30);
        node* c = new node(40);


        // linked the node
        head->next = a;
        a->next = b;
        b->next = c;
        c->next = NULL;
       
       // insert at tail
    //    printNode(head);

       // cycle detect
       node* slow = head;
       node* fast = head;
       
       bool isDetected = false;
       while (fast != NULL && fast->next != NULL)
       {
             // slow ak dhap jabe
             slow = slow->next;
             // and fast dui dhap jabe
             fast = fast->next->next;

             // cycle detect
             if (fast == slow)
             {
                isDetected = true;
                break;
             }
             
       }
       
       if (isDetected==true)
       {
          cout<<"Cycle Detected"<<endl;
       }
       else
       {
          cout<<"Not Detected"<<endl;
       }
       
       
       
}