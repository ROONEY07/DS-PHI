#include<bits/stdc++.h>
using namespace std;
void reverse(stack<int> s)
{
   // base case
    if(s.empty()) return;
    // You store the first element and tell recursion to fetch the rest of the elements.
    int x = s.top();
    s.pop();
    reverse(s);

     stack<int> newSt;
    while(!s.empty())
    {
        newSt.push(s.top());
        s.pop();
    }
    // then give the stoed value
    newSt.push(x);

    while(!newSt.empty())
    {
        s.push(newSt.top());
        newSt.pop();
    }

}
int main()
{
   stack<int> st;
   int n;
   cout<<"Enter the size of stack: ";
   cin>>n;

   for (int i = 0; i < n; i++)
   {
        int x;
        cin>>x;
        st.push(x);
   }
   

   reverse(st);
  
  // print the stck
   while (!st.empty())
   {
       cout<<st.top()<<endl;
       st.pop();
   }

}