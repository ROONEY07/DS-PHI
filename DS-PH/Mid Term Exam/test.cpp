#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // declare list
    list<string> linkedList; 
    string val;

    // take input the list
    while (cin >> val && val != "end") 
    {
        linkedList.push_back(val);
    }

    int Q;
    cin >> Q;
    cin.ignore();

   // store the current position so that we can traverse it
    auto current = linkedList.begin(); 

    while (Q--) 
    {
        string command;
        getline(cin, command);

        stringstream ss(command);
        string action, searchVal;
        ss >> action;

        if (action == "next")
        {
            if (current != linkedList.end() && next(current) != linkedList.end()) 
            {
                current++;
                cout << *current << endl;
            } 
            else 
            {
                cout << "Not Available" << endl;
            }
        } 
        else if (action == "prev") 
        {
            if (current != linkedList.begin()) 
            {
                current--;
                cout << *current << endl;
            } 
            else 
            {
                cout << "Not Available" << endl;
            }
        } 
        else
         {
            // Search for the remaining value in the command
            ss >> searchVal;

            auto it = find(linkedList.begin(), linkedList.end(), searchVal);
            if (it != linkedList.end()) 
            {
                current = it;
                cout << *current << endl;
            } 
            else 
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
