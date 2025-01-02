#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    // constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
    public:
    node* head = NULL;
    node* tail = NULL;
    int sz = 0;

    void push(int val) // push value means, insert at tail
    {
        sz++;
       node* newNode = new node(val);
       if (head == NULL)
       {
          head = newNode;
          tail = newNode;
          return;
       }

       // otherwise insert at tail
       tail->next = newNode;
       
       // and update the tail
       tail = tail->next;
       
    }

    void pop() // pop value means, delete the head
    {
        sz--;
        node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (tail = NULL)
        {
            head = NULL;
        }
        
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
       return sz;
    }

    // check the Queue is NULL or not
    bool empty()
    {
        if(sz==0) return true;
        else return false;
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