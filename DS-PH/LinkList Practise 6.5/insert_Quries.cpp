#include <bits/stdc++.h>
using namespace std;

// Create node
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

// Print the linked list
void print_node(node* head)
{
    cout<<"Linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// Insert at tail
void insert_tail(node*& head, int val) 
{
    node* newNode = new node(val);
    // if the head is null
    if (head == NULL) 
    {
        head = newNode;
        return;
    }
    
    // otherwise insert at tail
    node* tmp = head;
    while (tmp->next != NULL) 
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

// Insert at any position
void insert_any_pos(node* &head, int pos, int val) 
{
    // create new node to insert at position
    node* newNode = new node(val);
    node* tmp = head;

    if (pos == 0) 
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse to the position before where we want to insert
    
    for (int i = 1; i <= pos-1; i++) 
    {

        if (tmp == NULL) 
        {
            cout << "Invalid position" << endl;
            return;
        }

        tmp = tmp->next;
        
        
    }

    // Check if position is valid
    if (tmp == NULL) 
    {
        cout << "Invalid position" << endl;
        return;
    }

    // Insert the new node
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// insert at head
void insert_head(node* &head, int val)
{
      // create a new Node that insert in head
      node* newNode = new node(val);
      newNode->next = head;
      head = newNode;
}

int main() 
{
    // Create a linked list
    node* head = NULL;
    int val;

    cout << "Enter values: ";
    while (true) 
    {
        cin >> val;
        if (val == -1) break;
        insert_tail(head, val);
    }

    print_node(head);

    int q;
    cout << "\nEnter the number of queries: ";
    cin >> q;

    while (q--) 
    {
        int pos, val;
        cout << "Enter the value and position: ";
        cin >> pos >> val;

        if (pos==0)
        {
            insert_head(head,val);
        }
        else
        {
            insert_any_pos(head, pos, val);
        }

        print_node(head);
    }

    
    return 0;
}
