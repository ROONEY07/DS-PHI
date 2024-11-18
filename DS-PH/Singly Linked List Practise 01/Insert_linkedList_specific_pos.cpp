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
    cout << "\nYour linked list is: ";
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
void insert_at_pos(node* &head, int pos, int val) {
    node* newNode = new node(val);

    // Case when position is 0 (insert at head)
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    node* tmp = head;
    // Move to the position just before the insertion point
    for (int i = 1; i < pos; i++) {
        if (tmp == NULL) {
            cout << "Invalid position" << endl;
            return;
        }
        tmp = tmp->next;
    }
    // Insert the new node
    newNode->next = tmp->next;
    tmp->next = newNode;
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

    // Take input from the user to create the linked list
    int val;
    cout << "Enter the values for the linked list: ";
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    // Print the linked list
    print_node(head);
    
    // take Quries
    int Quries;
    cout<<"Enter a number of Quries: ";
    cin>>Quries;
    for (int i = 0; i < Quries; i++)
    {
        // Insert at a specific position
        int pos, value;
        cout << "Enter the position to insert: ";
        cin >> pos;
        cout << "Enter the value to insert: ";
        cin >> value;

        if (pos > size(head) || pos < 0) {
            cout << "\nInvalid position" << endl;
        } else {
            insert_at_pos(head, pos, value);
        }

        // Print the linked list after insertion
        print_node(head);

    }
    
    return 0;
}
