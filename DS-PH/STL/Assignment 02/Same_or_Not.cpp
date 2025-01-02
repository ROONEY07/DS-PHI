#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; // Size of stack and queue
    // cout<<"Enter the size of stack and queue: ";
    cin >> n>>m;

    stack<int> st;
    queue<int> q;

    // Push elements into the stack
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // Push elements into the queue
    for (int i = 0; i < m; i++) 
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // Compare stack and queue
    bool found = true;
    while (!q.empty() && !st.empty()) 
    {
        int k = q.front();
        q.pop();

        int t = st.top();
        st.pop();

        if (k != t) 
        {
            found = false;
        }
    }

    // Output result
    if (found && q.empty() && st.empty()) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
