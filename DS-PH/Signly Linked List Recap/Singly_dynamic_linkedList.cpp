#include<bits/stdc++.h>
using namespace std;
//create node with constructor so that, we can declare an value instantly
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
         // node er next a NULL rakhar reason hocche, first time jokhon akta node create kori, tokhon
         // er next pointer NULL rakhi, ate bujai se karo sathe connected na. jodi NULL na rakhtam, tahole
         // sekhane garbase value dekhato. SO, NULL rakhe bujai se karo sathe connected na, and amora caile
         // new node ke er sathe linked korte pari....  
     }
};

// create a function to print the node
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
int main()
{
    // create dynamic object
/*
    new node(10); -> aita hocche heap/dynamic memory te create hoise. but aita ami accesss korte parbo na
    karon hocche, ami ja datatype er object create korsi, se oi datatype er address ferot day..
    and ake access korar jonno, static memory te aitar akta copy receive kora lagbe.Like

    Node* a = new node(10);
*/

// create dynamic object
 node* head = new node(10);
 node* a = new node(20);
 node* b = new node(30);
 node* c = new node(40);

 // now linked the nodes

 head->next = a;
 a->next = b;
 b->next = c;

 /*
 but aibhave akta akta node er value set kora then linked kora aita onk smy er bepar.. tai
 time reduce korar jnno, user er kach theke input niya node gulo print korte pari..
 but, linked list jahatu, kono index support kore na. tai aikhane er last node a value insert kore kore
 value input nite hobe..
 */






// we can print the nodes in three way:

//0001
 // now print the nodes..
//  cout<<head->val<<endl;
//  cout<<head->next->val<<endl;
//  cout<<head->next->next->val<<endl;
//  cout<<head->next->next->next->val<<endl;

 // but amora ai print er kaj ta loop er maddhome sohojei time reduce kore, print kore nite pari..
 // for example..



//002
    // cout<<"\nYour linked list is: ";
    // node* tmp = head;
    // while (tmp!=NULL)
    // {
    //    cout<<tmp->val<<" ";
    //    tmp = tmp->next;
    // }
    // cout<<endl<<endl;



//003
print_node(head);

 
}