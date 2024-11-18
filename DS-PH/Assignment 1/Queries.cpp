#include<bits/stdc++.h>
using namespace std;

// create nodes
class node {
    public:
    int val;
    node* next;

    //constructor 
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// print the node
void print_node(node* head) {
    // cout << "\nYour linked list is: ";
    node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// insert at tail (optimized way)
void insert_at_tail(node* &head, node* &tail, int val) {
    node* newNode = new node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// insert at a specific position
void insert_at_pos(node* &head, node* &tail, int pos, int val) {
    node* newNode = new node(val);

    // when position is 0 insert at head
    if (pos == 0)
     {
        newNode->next = head;
        head = newNode;
        // If the list was empty, update the tail
        if (tail == NULL) {
            tail = newNode;
        }
        return;
    }

    node* tmp = head;
    // Move to the position just before the insertion point
    for (int i = 1; i < pos; i++) 
    {
        if (tmp == NULL) {
            cout << "Invalid position" << endl;
            return;
        }
        tmp = tmp->next;
    }

    // Insert the new node
    newNode->next = tmp->next;
    tmp->next = newNode;

    // If we inserted at the tail position, update the tail
    if (newNode->next == NULL) {
        tail = newNode;
    }
}

// size of linked list
int size(node* head) {
    node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    // make queries
    int Q;
    // cout << "Enter the number of queries: ";
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        // Take input from the user for position and value
        int pos, val;
        // cout << "Enter position and value: ";
        cin >> pos >> val;

        if (pos > size(head) || pos < 0) {
            cout << "\nInvalid position." << endl;
        } else {
            insert_at_pos(head, tail, pos, val);
            print_node(head);
        }
    }
    

    return 0;
}
