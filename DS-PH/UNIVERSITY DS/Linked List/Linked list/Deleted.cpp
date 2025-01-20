#include <iostream>
using namespace std;
int main()
{
    int PTR, START, LINK[10], AVAILABLE;
    char INFO[10];

    // Link list information
    cout << "Start from : ";
    cin >> START;
    PTR = START;
    cout << endl;

    while (PTR != 0)
    {
        cout << "Input Information : ";
        cin >> INFO[PTR];
        cout << "Input the next node index : ";
        cin >> LINK[PTR];
        PTR = LINK[PTR];
    }

    // Available information
    cout << "Available  Memory : ";
    cin >> AVAILABLE;
    PTR = AVAILABLE;
    while (PTR != 0)
    {
        cout << "Input the next available node index : ";
        cin >> LINK[PTR];
        PTR = LINK[PTR];
    }

    // Print the link list
    cout << endl;
    PTR = START;
    cout << endl;
    cout << "Start : " << START << endl;
    while (PTR != 0)
    {
        cout << "Information : " << INFO[PTR] << endl;
        cout << "Next Link : " << LINK[PTR] << endl;
        PTR = LINK[PTR];
    }

    // Print  the available memory
    cout << endl;
    cout << "Available from  : " << AVAILABLE << endl;
    PTR = AVAILABLE;
    while (PTR != 0)
    {
        cout << "Next available node index : " << LINK[PTR] << endl;
        PTR = LINK[PTR];
    }

    // DELETION PART
    char flag;
    cout<<"Do you want to delete the node? then press y: ";
    cin>>flag;
    while (flag=='y')
    {
        int LOC, LOCP;
        cout << "Enter the location for deletion : ";
        cin >> LOC;
        cout << "Enter the previous location : ";
        cin >> LOCP;
        if (LOCP == 0)
        {
            START = LINK[START];
        }
        else
        {
            LINK[LOCP] = LINK[LOC];
        }
        LINK[LOC] = AVAILABLE;
        AVAILABLE = LOC;

    //Printing deletion part

    cout << endl;
    PTR = START;
    cout << endl;
    cout << "Start : " << START << endl;
    while (PTR != 0)
    {
        cout << "Information after deletion : " << INFO[PTR] << endl;
        cout << "Next Link after deletion : " << LINK[PTR] << endl;
        PTR = LINK[PTR];
    }
    cout << endl;
    cout << "Available from after deletion : " << AVAILABLE << endl;
    PTR = AVAILABLE;
    while (PTR != 0)
    {
        cout << "Next available node index : " << LINK[PTR] << endl;
        PTR = LINK[PTR];
    }
          
        cout<<"Do you want to delete the node? then press y : ";
        cin>>flag;

        }

    return 0;
}