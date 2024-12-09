#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a list
    list<int> mylist;

    int Q;
    // cout << "Enter the Queries: ";
    cin >> Q;

    while (Q--) 
    {
        int X, V;
        cin >> X >> V;

        if (X == 0) 
        {
            // Insert at head
            mylist.push_front(V);
        } 
        else if (X == 1) 
        {
            // Insert at tail
            mylist.push_back(V);
        } 
        else if (X == 2) 
        {
            // Delete at index V
            if (V < 0 || V >= mylist.size()) 
            {
                // cout << "Invalid index" << endl;
                // Print the list
                cout << "L -> ";
                for (int val : mylist) 
                {
                    cout << val << " ";
                }
                cout << endl;
                
                // Print the list in reverse without altering its order
                cout << "R -> ";
                for (auto it = mylist.rbegin(); it != mylist.rend(); ++it) 
                {
                    cout << *it << " ";
                }
                cout << endl;
                continue;
            }
            else if (V == 0)
            {
                mylist.pop_front();
            }
            else
            {
                 mylist.erase(next(mylist.begin(), V));
            }
            
           
        }





        // Print the list
        cout << "L -> ";
        for (int val : mylist) 
        {
            cout << val << " ";
        }
        cout << endl;
        
        // Print the list in reverse without altering its order
        cout << "R -> ";
        for (auto it = mylist.rbegin(); it != mylist.rend(); ++it) // but it does not modify the list.
        {
            cout << *it << " ";
        }
        cout << endl;

        // cout << "R -> ";
        // mylist.reverse();  // we can not use this , becase it directly modifies the list such that the first element becomes the last and vice versa.
        // for (int val:mylist)
        // {
        //     cout<<val<<" ";
        // }
        // cout<<endl;
        
    }

    return 0;
}
