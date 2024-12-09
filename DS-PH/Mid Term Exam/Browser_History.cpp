#include <bits/stdc++.h>
using namespace std;

// Create a node
class Node 
{
    public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Print the linked list
void printList(Node* head) 
{
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert a node at the tail
void insertTail(Node*& head, Node*& tail, string val) 
{
    Node* newNode = new Node(val);
    if (tail == NULL) 
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;

    string val;
    // Read input until "end"
    while (cin >> val && val != "end") 
    {
        insertTail(head, tail, val);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    Node* tmp = head;

    while (Q--) 
    {
        string command;
        getline(cin, command);

        stringstream ss(command);
        string action, searchVal;
        ss >> action;

        if (action == "next") 
        {
            if (tmp != NULL && tmp->next != NULL) 
            {
                tmp = tmp->next;
                cout << tmp->val << endl;
            } else 
            {
                cout << "Not Available" << endl;
            }
        } 
        else if (action == "prev") 
        {
            if (tmp != NULL && tmp->prev != NULL) 
            {
                tmp = tmp->prev;
                cout << tmp->val << endl;
            } else 
            {
                cout << "Not Available" << endl;
            }
        } else 
        {
            // The remaining part of the command is the search value
            ss >> searchVal;

            Node* searchNode = head;
            bool found = false;
            while (searchNode != NULL) 
            {
                if (searchNode->val == searchVal) 
                {
                    tmp = searchNode;
                    cout << tmp->val << endl;
                    found = true;
                    break;
                }
                searchNode = searchNode->next;
            }
            if (!found) 
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
