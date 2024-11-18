#include<bits/stdc++.h>
using namespace std;
// linked list purota node based. so we have to create node first
// create node
class node
{
    public:
     int val;
     node* next;

     //constructor 
     node(int val)
     {
        // constructor use korsi jate object a bar bar value set kora na lage. object declare korar sathe
         // sathe value set korte pari. 
         // we declae constructor to reduce to time of object set value
         this->val = val;
         this->next = NULL;
         
        // and protita node er next pointer NULL a thake, oita decalre kore dilam, jate abar bolte na hoi
     }
};

// create tail function to insert at node at tail
void tail(node* &head, int val)
{
     // create newNode which is to inserted at tail
     node* newNode = new node(val);
     
     // handle the execption:
     // execption ta hocche, head jodi khali thake, next pointer NULL a thake. R NULL er kono value nai
     // NUll er kono address nai. so tail o thakbe na , jekhane new node insert korbo. tai 
     // new node hisebe jeita asbe oitake head kore dite hobe.
     
     if(head == NULL)
     {
        head = newNode;
        // pointer ke dereference kore value ke update kore jai. but directly update kora jai na
        // directly set korle reference akare value pass kora lagbe jate, directly set korle value
        // update kora jai.
        return;
     }

     // now insert at tail er jonno tail ke findOut korte hobe.
     node* tail = head;
     while (tail->next!=NULL)
     {
        // loop akon NULL porjontto colbe , akon let's findOUt the tail
        tail = tail->next;
     }
    // tail akon last node a. now insert the newNode to tail
    tail->next = newNode;
}

// create a function to print the linked list
void print_node(node* head)
{
     cout<<"Your linked list: ";
     node* tmp = head;
     while (tmp!=NULL)
     {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
     }
     cout<<endl;
}
int main()
{
    // let's assume our head is NULL
    node* head = NULL;
    // to optimised the code, we can print or insert at tail by create option

    // cout<<"Option 1: insert at tail"<<endl;
    // int op;
    // cin>>op;

    // if(op==1)
    // {
    //     cout<<"Enter the value: ";
    //     int val;
    //     cin>>val;
    //     tail(head,val);
    // }

    // amn korle code akbar exicute kore ber hoya jai. akon jodi akta infinite loop use kori
    // tahole ami na caile code exicute hobe na, and isshe moto kaj korte parbo

    while (true)
    {
        cout<<"Option 1: insert at tail"<<endl;
        cout<<"Option 2: print the node"<<endl;
        cout<<"Option 3: terminate"<<endl;
        int op;
        cin>>op;

        if(op==1)
        {
            cout<<"Enter the value: ";
            int val;
            cin>>val;
            tail(head,val);
        }
        else if (op == 2)
        {
            print_node(head);
        }
        else if (op==3)
        {
            break;
        }
        
        
    }
    
    
}