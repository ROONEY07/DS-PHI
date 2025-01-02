#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin>>s;

        stringstream ss(s);
        stack<char> st;
        for (char c:s)
        {
            if (!st.empty() && ((c == '0' && st.top() == '1') || (c == '1' && st.top() == '0'))) 
            {
                st.pop(); // Valid deletion pair, remove the top of the stack
            } 
            else 
            {
                st.push(c); // Push the current character onto the stack
            }
        }
        

        if (st.empty()) 
        {
            cout << "YES" << endl; 
        } 
        else
        {
            cout << "NO" << endl; 
        }
    }
    
}