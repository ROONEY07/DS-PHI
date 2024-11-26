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
    // cout<<"Linked list is: ";
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

// insert at head
void insert_head(node* &head, node* &tail,  int val)
{
        node* newNode = new node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        

     // head a insert korle amar tail er kono poriborton asbe na
}

// delete the node
void delete_any_pos(node* &head, node* &tail, int pos)
{
    node* tmp = head;
    if (pos==0)
    {
        node* deleteHead = head;
        head = head->next;
        delete deleteHead;

        // but jodi head a ase dekhi head null tahole tail keo null kore dite hobe
        if (head == NULL)
        {
            tail = NULL;
        }
        
        return;
    }
    
    for (int i = 1; i <=pos-1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        }

    }

    // store the node which wanna delete
    node* deleNode = tmp->next;
    //এখন ডিলিট এর আগের নড এর সাথে পরের নড কে যুক্ত করি 
    if (deleNode == NULL)
    {
        return;
    }
    
    tmp->next = tmp->next->next;
    // now delete the node
    if (tmp->next == NULL)
    {
        tail = tmp;
    }
    
    delete deleNode;
    
}
int main()
{
      node* head = NULL;
      node* tail = NULL;
     

    int Q;
    // cout << "Enter number of operations: ";
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0) 
        {
            // Insert at head
            insert_head(head,tail,V);
        } else if (X == 1) 
        {
            // Insert at tail
            insert_tail(head, tail, V);
        } else if (X == 2) 
        {
            // Delete at index V
            delete_any_pos(head,tail,V);
        }

        // Print the linked list after each query
        print_node(head); 
        
    }
      
  
    return 0;
      
}