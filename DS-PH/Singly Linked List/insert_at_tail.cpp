#include<bits/stdc++.h>
using namespace std;
// linked list er jonno node create kora lagbe
// create a node
class node
{
    public:
     int val;
     node* next;

     // create constructor to reduce object value time
     node(int val)
     {
         this->val = val;
         this->next = NULL;
         // protita last node e next pointer NULL thake, assume kore nei ja, node ta amr first time asche

     }
};

// create a tail node. amar linked list er first kaj hocce tail node ber kora.
// karon linked list a jahatu indexing allow kora na, tai last node a value insert kore kore 
// value set korte hobe ba caile value input nite parbo

// and insert at tail , aita akta function er maddome handle korbo
int insert_at_tail(node* head, int val)
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
     }


    // akon insert at tail er jonno , age tail node ta ber kora lagbe. so tail node ta hobe,
    // ja node er next pointer NULL thake. so
    node* tail = head;
    while (tail->next!=NULL)
    {
        // tail akon last node a.
        // akon newNode ke tail a insert koro
        tail = tail->next;
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

int main()
{
    // and jahatu kono node amora create kori nai. akta akta kore node asbe , take tail a insert korte hobe
    // sei khetre option create kore korle code ta dekhte optimise lagbe

    // Let's assume, amar first node ta khali kisu nai. that's means head khali
    node* head = NULL;
    // so ami user theke option er maddhome bolbo , tmi kon option a casso
    cout<<"Option 1: insert at tail"<<endl;
    int op;
    if(op == 1)
    {
        
    }
    cin>>op;
}