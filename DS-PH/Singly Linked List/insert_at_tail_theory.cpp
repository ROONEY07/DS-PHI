#include<bits/stdc++.h>
using namespace std;
// note: linked list er jahatu kono index nei, tai aikhane normmaly value input nite parbo na.
// aikhane tar last node/ ba tail node a akta akta value linked kore input nite hobe.
// insert at tail er jonno sobar age amk tail ta ke cinte hobe, aitake findout korte hobe.
// taholei kebol insert korte parbo tail a.
// to tail hocche, jei node er next pointer NULL thakbe oitai tail
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
int tail(node* head)
{
     // create new Node which we wanna insert at tail
     node* newNode;
     node* tail = head;
     // akon kotha hocche, tail to findout korlam. akon insert korbo ki kore?
     // amk insert korte hobe obviously newNode er sathe, and aitake linked korte hobe tail a
     // tailNode = newNode korlei insert hoya jabe.
     while (tail->next!=NULL)
     {
        tail->next = newNode;
     }
     

}
// create a tail node. amar linked list er first kaj hocce tail node ber kora.
// karon linked list a jahatu indexing allow kora na, tai last node a value insert kore kore 
// value set korte hobe ba caile value input nite parbo

// and insert at tail , aita akta function er maddome handle korbo
void tail(node* &head, int val)
{
    // akta linked niya jai kaj korte cai na kno, akta niya lagbei ta hocce head.
    // so tail just, head receive kore. and new node er value receive kore.


    // insert at tail ta korbo new node er sathe, tai age new node declare korte hobe
    // create new node
    node* newNode = new node(val);

    // Execption handle
    if(head == NULL)
     {
         head = newNode;
         return;
     }


    // akon insert at tail er jonno , age tail node ta ber kora lagbe. so tail node ta hobe,
    // ja node er next pointer NULL thake. so
    node* tail = head;
    while (tail->next!=NULL)
    {
        // tail akon last node a.
        // akon newNode ke tail a insert koro
        tail->next = newNode;
        // but akta exception ache. execption ta hocche jodi head node ta first time ache, 
        // tahole next pointer NULL a thakbe and NULL er next bolte kisu nai.
        //  NULL er kono value nai, NULL er kono address nai. ake access kora jai na . 
        // tai tail ta thakbe na. sei jonno, 


        // Execption : 
        
        // head jodi khali thake, oikhane kisu nai. and tail o nai insert korar moto
        // so oi khetre, new ja, Node ta asbe. oikhane oi newNode kei head kore dite hobe,
    }
     // tail akon last node a. now insert the newNode to tail
    tail->next = newNode;
    
}
void print_node(node* head)
{
    cout<<"Your linked list is: ";
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
    // obviously dynamic node create korte hobe
    // and jahatu kono node amora create kori nai. akta akta kore node asbe , take tail a insert korte hobe
    // sei khetre option create kore korle code ta dekhte optimise lagbe

    // Let's assume, amar first node ta khali kisu nai. that's means head khali
    node* head = NULL;
    // to optimised the code, we can print or insert at tail by create option
    cout<<"Option 1: insert at tail"<<endl;
    int op;
    cin>>op;

    if(op==1)
    {
        cout<<"Enter the value: ";
        int val;
        cin>>val;
        tail(head,val);
    }
    print_node(head);
}