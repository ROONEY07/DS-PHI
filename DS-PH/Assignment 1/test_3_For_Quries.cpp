#include<bits/stdc++.h>
using namespace std;
// create node
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

// print the node
void print_node(node* head)
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

    // now update the tail
    tail = newNode;


}


// create a function to insert at head
void insert_at_head(node* &head, int val)
{
    node* newNode = new node(val);
    if (head==NULL)
    {
       head=newNode;
       return;
    }

    newNode->next = head;
    head = newNode;

}


// size of the linked list
int sizeOfLinked(node* head)
{
   node* tmp = head;
   int count = 0;
   while (tmp!=NULL)
   {
      count++;
      tmp = tmp->next;
   }
   return count;
}

// delete the pos
void delete_any_pos(node* &head, node* &tail, int pos)
{
    if(head == NULL) return;

    node* tmp = head;
    //cout<<tmp->val<<endl;
    if (pos >= sizeOfLinked(head))
     {
         return;
     }

    for (int i = 1; i <=pos-1; i++)
    {
        tmp = tmp->next;

    }

    if(tmp->next->next == NULL)
    {
        tail=tmp;
    }
    node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

// Function to delete the head
void delete_head(node* &head)
{
    if (head == NULL) return;
    node* deleteHead = head;
    head = head->next;
    delete deleteHead;
}

int main()
{
      node* head = NULL;
      node* tail = NULL;


    int Q;
    // cout << "Enter number of operations: ";
    cin >> Q;

    while (Q--)
    {
        int type, val, pos;
        cin >> type;

        if (type == 0)
        {
            // Insert at head
            cin >> val;
            insert_at_head(head, val);
            if (tail == NULL) tail = head;
              // Update tail if this is the first node
        }
        else if (type == 1)
        {
            // Insert at tail
            cin >> val;
            insert_tail(head, tail, val);
        }
        else if (type == 2)
        {
               // Delete at a specific position
               cin >> pos;
               if (pos == 0)
                {
                    delete_head(head);
                    if(head==NULL)
                    {
                        tail=NULL;
                    }
                }
                else
                {
                    delete_any_pos(head,tail, pos);
                }

        }

        // Print the linked list
        print_node(head);

    }


    return 0;

}