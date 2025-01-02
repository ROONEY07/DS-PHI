#include<bits/stdc++.h>
using namespace std;
// create node
class node
{
    public:
    int val;
    node* next;
    node* prev;
    // constructor
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// create stack with linked list
class myStack
{
     public:
     node* head = NULL;
     node* tail = NULL;

     // for initial stage size 0
     int sz = 0;

     // push the value
     void push(int val) // push value means, tail a insert kora
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
        newNode->prev = tail;

        // update the tail
        tail = tail->next;
    }

    // pop the value
    void pop() // pop means tail node delete kora
    {
        sz--;
        node* deleteNode = tail;
        tail = tail->prev;

        // but node jodi aktai hoi, tahole delete er por head ke update korte hobe, orthat head o nULL hobe
        if (tail == NULL)
        {
            head = NULL;
        }

        // otherwise tail delte hobe
        delete deleteNode;  
        
    }

    // as the stack does not support index,so to accessing the value create top
    int top()
    {
        // top mane hoche last orthat tail er value ferot dewa
        return tail->val;
    }


    // size of stack
    int size()
    {
        // size to trac asei, so size ferot dilei hocche
        return sz;
    }

    // check the stack empty or not
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    } 
};

// create a Queue with linked list
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
       newNode->prev = tail;
       
       // and update the tail
       tail = tail->next;
       
    }

    void pop() // pop value means, delete the head
    {
        sz--;
        node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
        
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
     

     int n,m; // Size of stack and queue
     // cout<<"Enter the size of stack and queue: ";
     cin >> n>>m;
     
     myStack st;
     myQueue q;

     for (int i = 0; i < n; i++)
     {
        int x;
        cin>>x;
        st.push(x);
     }
     for (int i = 0; i < m; i++)
     {
        int x;
        cin>>x;
        q.push(x);
     }

     bool found = true;

     if (st.size()!=q.size())
     {
        found = false;
     }
     
     while (!st.empty() && !q.empty())
     {
         int k = st.top();
         st.pop();

         int t = q.front();
         q.pop();
         if (k!=t)
         {
            found = false;
         }
         

     }
     
     if (found)
     {
        cout<<"YES";
     }
     else
     {
        cout<<"NO";
     }
     
     
     
     
}