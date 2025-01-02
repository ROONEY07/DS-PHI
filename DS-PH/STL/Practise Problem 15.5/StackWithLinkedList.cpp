#include<bits/stdc++.h>
using namespace std;
class Node
{
        public:
            int data;
            Node *next;
            
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
 };
class Stack
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int data) // push value in stack with linked list means , insert at tail
    {
        sz++;
        Node* newNode = new Node(data);
        if (head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        // otherwise insert at tail
        tail->next = newNode;
        // and update the tail
        tail = newNode;
        

    }

    void pop() //-- pop value in stack with linked list means , delete the tail
    {
        sz--;
        

        // If there's only one node
        if (head == tail) 
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }

         // Otherwise, traverse to find the second-to-last node
        Node* temp = head;
        while (temp->next != tail) 
        {
            temp = temp->next;
        }

        // Delete the tail and update pointers
        delete tail;
        tail = temp;
        tail->next = NULL;

       
        
    }

    int getTop() // get top mane hocche, tail er valu ferot dewa
    {
        return tail->data;
    }

    int getSize()
    {
        return sz;
    }
    
    bool isEmpty()
    {
        if(sz==0) return true;
        else return false;
    }

};
int main()
{
      Stack st;
      int n;
      cout<<"Enter the size of stack: ";
      cin>>n;

      for (int i = 0; i < n; i++)
      {
          int x;
          cin>>x;
          st.push(x);
      }
      
     
     cout<<endl;
     // print the stack
     while (!st.isEmpty())
     {
         cout<<st.getTop()<<endl;
         st.pop();
     }
     
     
}