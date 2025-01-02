#include<bits/stdc++.h>
using namespace std;
class myQueue
{
    public:
    list<int> q;
    void push(int val) // push value means, insert at tail
    {
        q.push_back(val);
    }

    void pop() // pop value means, delete the head
    {
        q.pop_front();
    }

    int front()
    {
        return q.front();
    }

    int size()
    {
       return q.size();
    }

    // check the Queue is NULL or not
    bool empty()
    {
        return q.empty();
    }
};
int main()
{
      myQueue st;
      int n;
      cout<<"Enter the size of stack: ";
      cin>>n;
      for (int i = 0; i < n; i++)
      {
          int x;
          cin>>x;
          st.push(x);
      }
      
      // print the value
      while (!st.empty())
      {
          cout<<st.front()<<endl;
          st.pop();
      }
      
}