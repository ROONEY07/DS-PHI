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

// Print the linked list
void print_node(node* head) {
    cout << "\nYour linked list is: ";
    node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Insert at tail
void insert_at_tail(node* &head, node* &tail, int val) {
    node* newNode = new node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    int val;
    cout << "Enter the linked list: ";
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    // Print the linked list
    print_node(head);

    // Initialize frequency array
    vector<int> frequency(101, 0); // Assuming values are between 0 and 100

    // Count the frequency of each element
    node* tmp = head;
    while (tmp != NULL) {
        int i = tmp->val;
        if (i < 0 || i > 100) {
            cerr << "Value out of bounds. The value should be between 0 and 100." << endl;
            return 1;
        }
        frequency[i]++;
        tmp = tmp->next;
    }

    // Check for duplicates
    bool duplicate = false;
    for (int i = 0; i < 101; i++) {
        if (frequency[i] > 1) {
            duplicate = true;
            break;
        }
    }

    if (duplicate) {
        cout << "The list contains duplicates." << endl;
    } else {
        cout << "The list does not contain any duplicates." << endl;
    }

    return 0;
}
