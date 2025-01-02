#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> newSt;

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


     // now copy the stack
     while (!st.empty())
     {
         int a = st.top();
         st.pop();

         newSt.push(a);
     }
     
    // print the new Stack
    while (!newSt.empty())
    {
        cout<<newSt.top()<<" ";
        newSt.pop();
    }
       
}