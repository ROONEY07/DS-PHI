#include<bits/stdc++.h>
using namespace std;
// create a node
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
// create a function to insert at tail
void insert_at_tail(node* &head, int val)
{
    // create newNode to insert at tail
    node* newNode = new node(val);
    
    // handle execption:
    if(head==NULL)
    {
        head = newNode;
        cout<<"\n Head is inserted"<<endl<<endl;
        return;
    }

    // now insert at tail
    node* tail = head;
    while (tail->next!=NULL)
    {
        tail = tail->next;
    }
    // now tail is in the last node position
    // now linked ta newNode to the tail
    tail->next = newNode;
    cout<<"\nTail is inserted"<<endl<<endl;
    
}
// Now create a function to print the node
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

// create a function to insert a node in any position
void insert_any_pos(node* head, int pos, int val)
{
    // create newNode to insert at any postion
    node* newNode = new node(val);
    node* tmp = head;
    // jei position a insert korte caina kno, ager position a aste hobe ase, porer node er sathe
    // age linked korte hobe, then ager node er sathe linked korte hobe
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    }
    // now linked the nodes
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<"\n inserted at any position "<<pos<<endl<<endl;

    // obviously it has a execption that is
    // amora node ke jekono position a insert korte parleo head position ba (0 position) a insert korte
    // parbo na. karon head position ba 0 position a insert korte caile head ba 0 position er ager position
    // a aste hobe, jeita posible na. karon 0 er postion er age kisu nai. SO,
    // execption hisebe bolte hobe, newNode ke age, head er sathe linked korte hobe and
    // then newNode ke head kore dite hobe. taholei execption done
    

    // for that, we need new function to handle the execption....
    
}
// create a function to handle the execption of insert at any position
void insert_at_head(node* &head, int val)
{
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
    cout<<"\nInseted at head"<<endl<<endl;
}
// create a function to delete from positions of node
void delete_from_pos(node* head, int pos)
{
    node* tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next;
    } 
    
    // create and add the node which i wanna delete
    node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<"\nDelete from positon "<<pos<<endl<<endl;
}
int main()
{
    // create a object of node
    node* head = NULL;
    while (true)
    {
         cout<<"\nOption 1: insert at tail"<<endl;
         cout<<"Option 2: insert at any position"<<endl;
         cout<<"Option 3: insert at head"<<endl;
         cout<<"Option 4: Print the node"<<endl;
         cout<<"Option 5: Delete from position"<<endl;
         cout<<"Option 6: Terminate"<<endl;
         cout<<"Enter the option: ";
         int op;
         cin>>op;
         if (op==1)
         {
            int val;
            cout<<"Enter the val: ";
            cin>>val;
            insert_at_tail(head,val);
         }
         else if (op==2)
         {
             int pos;
             cout<<"Enter the position: ";
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
                insert_any_pos(head,pos,val);
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
         else if (op==5)
         {
            int pos;
            cout<<"Enter the position: ";
            cin>>pos;
            delete_from_pos(head,pos);
         }
         else if (op==6)
         {
            break;
         }
         
         
         
         
         
    }
    
}