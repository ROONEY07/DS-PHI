#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    stack<int> st;
    queue<int> newQ;

    int n;
    cout<<"Enter the size of Queue: ";
    cin>>n;
    cout<<"Enter the val of Queue: ";
    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       q.push(x);
    }


     // now copy the Queue into stack
     while (!q.empty())
     {
         int a = q.front();
         q.pop();

         st.push(a);
     }
     
     
    // now copy the stack into new Queue
     while (!st.empty())
     {
         int a = st.top();
         st.pop();

         newQ.push(a);
     }

    // print the new Queue
    while (!newQ.empty())
    {
        cout<<newQ.front()<<" ";
        newQ.pop();
    }
       
}