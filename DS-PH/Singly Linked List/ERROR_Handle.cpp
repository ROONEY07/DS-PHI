#include<bits/stdc++.h>
using namespace std;
// create nodes to like array
class node
{
    public:
     int val;
     node* next;

     //constructor 
     node(int val)
     {
         this->val = val;
         this->next = NULL;
     }
};
// create a function to declare a tail nodes. without tail node we can'nt work for linked list
// it's work like taking input or add another node to the tail
// declare tail
void insert_at_tail(node* &head, int val)
{
    // new node ke tail a linked korar jonno , akta new node declare kora lagbe
    // So, declare new Node
    node* newNode = new node(val);

    // it has exeception that, head jodi khali thake, tahole next pointer NULL tahkbe. R NULL er kono 
    // value hoina, NUll er kono address hoina. so amora tail er kono existance thakbe na.
    // so newNOde ke amora linked korteo parbo na. 
    
    // Execption Handle:
    // Head jodi NULL ba khali thake, tahole newNode hisebe jeita asbe take Head kore dite hobe
    // Execption handle done
    if (head==NULL)
    {
        head = newNode;
        cout<<"\ninserted at head"<<endl<<endl;
        return;
    }

    // now linked ta new Node at tail, create tail node
    node* tail = head;
    while (tail->next!=NULL)
    {
        tail = tail->next;
    }
    // now the loop is in the last node, now linked ta newNode to tail
    tail->next = newNode;
    cout<<"\n inserted at tail"<<endl<<endl;
    
}

// Create a function to print the node
void print_node(node* head)
{
    cout<<"\nYour linked list is: ";
    node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
    
}

// create a function to insert at position of any nodes
void insert_at_any_pos(node* head, int pos, int val)
{
    // notun akta value asbe jeita linked list er jekono position a insert kora lagbe
    // for that , we should create a new NOde
    node* newNode = new node(val);
    // now create a tmp node
    node* tmp = head;
    // insert at any position a node insert korar jonno, je position a insert korte cai, first er ager
    // position aste hobe
    // like
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
        if(tmp==NULL)
        {
            cout<<"\nInvalid Index"<<endl<<endl;
        }
        return;
    }
    // now linked ta node
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<"\nInserted at any position "<<pos<<endl<<endl;

    // obviously it has a execption that, jodi 0 no. position a insert korte bole ba head position a,
    // tahole age 0 position er ager position a aste hobe jeita posible na.
    // So er jonno Head position a insert korte bolle, new NOde ke head kore dite hobe
    
}
// TO handle the insert at any position execption declare a function name, insert at head
void insert_at_head(node* &head, int val)
{
    // create newNode to insert at head
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
    cout<<"\nInserted at head"<<endl<<endl;
}

// create a function to delete from position
void delete_from_pos(node* head, int pos)
{
    node* tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
        if(tmp==NULL)
        {
            cout<<"\nInvalid Index"<<endl<<endl;
        }
        return;
    }
    if(tmp->next==NULL)
    {
        cout<<"\nInvalid Index"<<endl<<endl;
        return;
    }
    // je position ta delete korbo tar ager position a bosthan korsi
    // akon jei node ta delete korte cai, oi node ta kothaw store korte hobe, otherwise baki node gulo 
    // hariya jabe

    // store the node which i want to delete
    node* deleteNode = tmp->next;
    // now linked the node so that it's not gets lost
    tmp->next = tmp->next->next;
    // now delete the node
    delete deleteNode;
    cout<<"\nDelete from position "<<pos<<endl<<endl;

    // it has also a execption that, jodi 0 no position delete korte bole, tahole er ager position a
    // aste hobe jeita posible na.
    // to handle this execption we need a function
    
}

// to handle this execption declare a function delete head
void delete_head(node*& head)
{
    if(head == NULL)
    {
        cout<<"\nHead is invalid"<<endl<<endl;
        return;
    }
    node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<"\n delete from Head "<<endl<<endl;
}
int main()
{
    // declare nodes of object
    node* head = NULL;
    // to optimise to code, we can create a option 
    while (true)
    {
        // Thik ja ja karon gulor jonno error dite pare, oigulo handle korbo
        // Like,
        /*
           1. insert at tail er akta error amora already handle koresi, jeita head er jonno dito

           2. insert at position er kisu error handle korte hobe, er jonno age dekhte hobe thik
           ki ki korone error dite pare, seigulo hocche
              1. spacific position er baire input dile ta error dite pare. Like
              position jodi 5 hoi, jodi 6 a insert korte cai , tahole error dibe
              tmp jodi NULL cole jai, seikhetre error dibe. so error is handled.

          3. insert at head er kono error dibe na.
          4. print node er o kono error asbe na

          5. delete from position er duita error parbo
             1. specific position er baire node delete korte caile
             2. 1 no. position delete kora, 1 no. position delete korte caile segmentation fault dibe
             tar karon hocche, 1 no. position delete korle NULL pabo, then NULL ke linked korar moto to
             kisu nai. tokhon error dibe. ja tmp er next linked korar smy

          6. delete from head er moddhe error asbe jokhon, head NULL a thakbe.

        */

        cout<<"\nOption 1: insert at tail"<<endl;         // done
        cout<<"Option 2: insert at any position"<<endl;  // done
        cout<<"Option 3: insert at Head"<<endl;         // done
        cout<<"Option 4: print the node"<<endl;        // done
        cout<<"Option 5: delete from position"<<endl; // done
        cout<<"Option 6: delete Head"<<endl;         // done
        cout<<"Option 7: Terminate"<<endl;          // done
        cout<<"Enter the options: ";
        int op;
        cin>>op;
        if (op==1)
        {
            int val;
            cout<<"Enter the value: ";
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            int pos;
            cout<<"Enter the pos: ";
            cin>>pos;
            int val;
            cout<<"Enter the val: ";
            cin>>val;
            if (pos==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_at_any_pos(head,pos,val);
            }
              
        }
        else if (op==3)
        {
            int val;
            cout<<"Enter the val: ";
            cin>>val;
            insert_at_head(head,val);
        }
        else if (op==4)
        {
           print_node(head);
        }
        
        else if(op==5)
        {
             int pos;
             cout<<"Enter the position: ";
             cin>>pos;
             if (pos==0)
             {
                delete_head(head);
             }
             else
             {
                delete_from_pos(head,pos);
             }
             
        }
        else if (op==6)
        {
            delete_head(head);
        }
        else if (op==7)
        {
            break;
        }
        
    }
    
    
    
}