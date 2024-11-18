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


    //Take input the linked list

    int val;
    cout << "Enter the linked list: ";
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    // Print the linked list
    print_node(head);



    // Declare an array that counts the number
    // int count[n] = {0};
    
    // Initialize frequency array
    vector<int> count(101, 0); // Assuming values are between 0 and 100

    // Count the frequency of each element
    // for (int i = 0; i < n; i++) {
    //     count[a[i]]++;
    // }
    
    // Count the frequency of each element
    node* tmp = head;
    while (tmp != NULL) 
    {
        int i = tmp->val;
        count[i]++;
        tmp = tmp->next;
    }


    // check here is have any duplicate or not
    // we can do it with bool function
    // bool duplicate = false;
    // for (int i = 0; i < n; i++) 
    // {
    //     if(count[i]!=0)
    //     {
    //         duplicate = true;
    //         break;
    //     }
    // }

     // Check for duplicates
    bool duplicate = false;
    for (int i = 0; i < 101; i++) 
    {
        if (count[i] > 1) {
            duplicate = true;
            break;
        }
    }

    if (duplicate==true)
    {
        cout<<"the array contain duplicate"<<endl;
    }
    else
    {
        cout<<"The array does not any duplicate"<<endl;
    }


    
}
