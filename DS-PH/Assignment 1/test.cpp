#include<bits/stdc++.h>
using namespace std;

// create node
class node {
public:
    int val;
    node* next;

    // Constructor to initialize node
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// create a function to print the linked list
void printNode(node* head) 
{
    if (head == NULL) 
    {
        cout << "List is empty" << endl;
        return;
    }
    node* tmp = head;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// create a function to insert at head
void insert_at_head(node* &head, node* &tail, int val) 
{
    node* newNode = new node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
    } else 
    {
        newNode->next = head;
        head = newNode;
    }
}

// create a function to insert at tail
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

// create a function to delete at a specific index
void delete_at_index(node* &head, node* &tail, int index) 
{
   
    // Deleting head or (index 0)
    if (index == 0) 
    {
        node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) {
            tail = NULL;  // If list becomes empty, reset the tail
        }
        return;
    }

    // Traverse to the node just before the one to be deleted
    node* tmp = head;
    for (int i = 1; i <= index - 1; i++) 
    {
        if (tmp == NULL || tmp->next == NULL) 
        {
            // cout << "Invalid index" << endl;
            return;
        }
        tmp = tmp->next;
    }

    // Delete the node at the index
    node* toDelete = tmp->next;
    if (toDelete == NULL) 
    {
        // cout << "Invalid index" << endl;
        return;
    }
    tmp->next = toDelete->next;
    if (tmp->next == NULL) 
    {
        tail = tmp;  // Update tail if the last node is deleted
    }
    delete toDelete;
}

int main() {
    node* head = NULL; // Initially, the list is empty
    node* tail = NULL;

    int Q;
    cin >> Q;  // Number of queries

    for (int i = 0; i < Q; i++) 
    {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            // Insert at head
            insert_at_head(head, tail, V);
        } else if (X == 1) {
            // Insert at tail
            insert_tail(head, tail, V);
        } else if (X == 2) {
            // Delete at index V
            delete_at_index(head, tail, V);
        }

        // Print the linked list after each query
        printNode(head);
    }

    return 0;
}