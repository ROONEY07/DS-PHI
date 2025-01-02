#include<bits/stdc++.h>
using namespace std;
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
class myStack
{
    public:
    // declare head and tail
    node* head = NULL;
    node* tail = NULL;

    // for initial stage size 0
    int sz = 0;

    // push the value
    void push(int val) // push value means, tail a insert kora
    {
        // jokhon push orthat tail a insert hobe tohkon size barbe
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
        // jokhon tail delete hobe tohkon size kombe
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
    // as it only provides top value
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
int main()
{
    // create a stack variable or object
    myStack st;
                                                                                                                                                                                                      
    int n;
    cout<<"Enter the size of stack: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    
    // print the stack
    while (!st.empty()) // stack empty na howa porjontto top er value daw
    {
        cout<<st.top()<<" "; // print the top value
        st.pop(); // remove the top value, otherwise we can not access the next top value, because it only provides the top value acess
    }
    
    
    
}