#include <bits/stdc++.h>
using namespace std;

int main() {
    int queries;
    cin >> queries;

    queue<string> q; 
    for (int i = 1; i <= queries; i++) 
    {
        int command;
        cin >> command;

        if (command == 0)
        {  
            string s;
            cin >> s; 
            q.push(s);
        } 
        else if (command == 1)
         {  
            if (!q.empty()) 
            {
                cout << q.front() << endl;  
                q.pop();
            } 
            else 
            {
                cout << "Invalid" << endl;  
            }
        } 
        else 
        {
            cout << "Invalid" << endl;  
        }
    }

    return 0;
}
