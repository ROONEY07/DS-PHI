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

// print the node
void print_node(node* head)  // O(N)
{
    // cout<<"Linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

// insert at tail
void insert_tail(node* &head, node* &tail, int val)     
{
    node* newNode = new node(val);
    // if my head is NULL the handle the execptation

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    // otherwise there is a value and tail .
    // so insert at tail
    tail->next = newNode;
    newNode->prev = tail;
    
    // now update the tail
    tail = newNode;
    
    
}

// check the node palindrome or not
void isPalindrome(node* head, node* tail)
{
    node* i = head;
    node* j = tail;
    bool isPalin = true;

    while (i != j && i->prev != j)  // problem here
    {
        if (i->val != j->val)
        {
            isPalin = false;
            break; 
        }
        i = i->next;
        j = j->prev;
    }

    if (isPalin)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}


int main()
{
      node* head = NULL;
      node* tail = NULL;

      int val;
    //   cout<<"Enter the val: ";

      while (true)
      {
         cin>>val;
         if(val==-1) break;
         insert_tail(head,tail,val);
      }
      

      // print the linked list 
    //   print_node(head);
    
    //   reverse_print(tail);
    isPalindrome(head,tail);
      
}