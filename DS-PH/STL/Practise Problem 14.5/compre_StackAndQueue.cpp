#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cout<<"Enter the size of stack: ";
    cin>>n;
    cout<<"Enter the val of stack: ";
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         st.push(x);
    }

    // Queue
    queue<int> q;
    int m;
    cout<<"Enter the size of Queue: ";
    cin>>m;
    cout<<"Enter the val of Queue: ";
    for (int i = 0; i < m; i++)
    {
         int y;
         cin>>y;
         q.push(y);
    }


    bool isSame = true;
    if (m==n)
    {
        while (!st.empty() && !q.empty())
        {

            int a = st.top();
            st.pop();

            int b = q.front();
            q.pop();

            if (a!=b)
            {
                isSame = false;
            }
            

        }
    }
    else
    {
        isSame = false;
    }
    
    
    
    if (isSame)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    
}