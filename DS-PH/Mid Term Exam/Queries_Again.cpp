#include <bits/stdc++.h>
using namespace std;

// Create node
class node 
{
public:
    int val;
    node* next;
    node* prev;
    // Constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Print the list
void print_node(node* head) 
{
    node* tmp = head;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Print the list in reverse
void reverse_print(node* tail) 
{
    node* tmp = tail;
    while (tmp != NULL) 
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

// Insert at tail
void insert_tail(node*& head, node*& tail, int val) 
{
    node* newNode = new node(val);
    if (tail == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

// Insert at head
void insert_head(node*& head, node*& tail, int val) 
{
    node* newNode = new node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Size of the linked list
int size(node* head) 
{
    node* tmp = head;
    int count = 0;
    while (tmp != NULL) 
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

// Insert at any position
void insert_any_pos(node*& head, int pos, int val) 
{
   
    node* newNode = new node(val);
    node* tmp = head;
    for (int i = 1; i <= pos-1; i++) {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    int Q;
    // cout << "Enter the number of queries: ";
    cin >> Q;

    while (Q--) {
        int X, V;
        // cout << "Enter position and value: ";
        cin >> X >> V;

        if (X < 0 || X > size(head)) 
        {
            cout << "Invalid" << endl;
        } else if (X == 0) 
        {
            insert_head(head, tail, V);
            cout << "L -> ";
            print_node(head);

            cout << "R -> ";
            reverse_print(tail);
        } 
        else if (X == size(head))
        {
            insert_tail(head, tail, V);
            cout << "L -> ";
            print_node(head);

            cout << "R -> ";
            reverse_print(tail);
        }
        
        else 
        {
            insert_any_pos(head, X, V);
            cout << "L -> ";
            print_node(head);

            cout << "R -> ";
            reverse_print(tail);
        }

        
    }

    return 0;
}
