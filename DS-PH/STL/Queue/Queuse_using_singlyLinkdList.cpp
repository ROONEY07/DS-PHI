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

    int top()
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
      st.push(10);
      st.push(20);
      cout<<st.top()<<endl;
      st.pop();
      cout<<st.top()<<endl;
}