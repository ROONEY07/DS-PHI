#include <bits/stdc++.h>
using namespace std;

// Define node class
class node {
public:
    int val;
    node* next;

    // Constructor
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Insert at tail function
void insert_at_tail(node*& head, node*& tail, int val) {
    // Create new node
    node* newNode = new node(val);

    // If the list is empty
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        // Attach new node at the end
        tail->next = newNode;
        tail = newNode;
    }
}

// Print the nodes function
void print_node(node* head) {
    cout << "\nYour linked list is: ";
    node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    // Declare node pointers
    node* head = NULL;
    node* tail = NULL;

    int val;
    cout << "Enter the value (enter -1 to stop): ";

    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }
    
    print_node(head);

    // Free allocated memory
    node* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        delete tmp;
    }

    /*
    Memory Leaks:

When you dynamically allocate memory using new, it becomes your responsibility to deallocate it once you're done using it.
If you fail to deallocate memory that is no longer needed, it remains allocated, even though your program might no longer have access to it. 
This is known as a memory leak.
Over time, memory leaks can accumulate, consuming valuable system resources and potentially causing your program to crash.
    */

    return 0;
}
