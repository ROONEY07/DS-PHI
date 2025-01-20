#include <iostream>
using namespace std;

void deleteNode(char INFO[], int LINK[], int &START, int &AVAIL, int LOC, int LOCP) {
    if (LOCP == 0) { // -1 indicates NULL
        // Deleting the first node
        START = LINK[START];
    } else {
        // Link the predecessor to the successor
        LINK[LOCP] = LINK[LOC];
    }
    
    // Return the deleted node to the available list
    LINK[LOC] = AVAIL; // Set the next of the deleted node to avail
    AVAIL = LOC;       // Update avail to point to the deleted node
}

int main() {
    int n;
    cout << "Enter the size of linked list: ";
    cin >> n;

    int start, loc, locP, link[n], avail;
    char info[n];

    // Initialize link array
    for (int i = 0; i < n; i++) {
        link[i] = 0; // Set all links to 0 initially
    }

    // Start the linked list
    cout << "Start the linked list: ";
    cin >> start;

    // Input for the linked list
    int ptr = start;
    while (ptr != 0) {
        cout << "Input info at node: ";
        cin >> info[ptr];
        cout << "Next node index: ";
        cin >> link[ptr];
        ptr = link[ptr];
    }

    // Input for available nodes
    cout << endl << "Available memory: ";
    cin >> avail;

    // Collect available nodes
    ptr = avail;
    while(ptr!=0) 
       {
            cout << "Enter available node index: ";
            cin >> link[ptr];
            ptr = link[ptr];
        }
    // Delete Operation
    cout << endl << "Enter the location of the node to delete: ";
    cin >> loc;

    // Find predecessor (LOCP)
    locP = 0; // Set LOCP to -1 (NULL)
    ptr = start;
    while (ptr != 0 && ptr != loc) {
        locP = ptr; // Update predecessor
        ptr = link[ptr];
    }

    if (ptr == 0) {
        cout << "Node not found." << endl;
    } else {
        // Call deleteNode function
        deleteNode(info, link, start, avail, loc, locP);
        
        // Print the updated linked list
        cout << "Updated linked list: " << endl;
        ptr = start;
        while (ptr != 0) {
            cout << "Node index: " << ptr << ", Info: " << info[ptr] << endl;
            ptr = link[ptr];
        }
    }

    return 0;
}
