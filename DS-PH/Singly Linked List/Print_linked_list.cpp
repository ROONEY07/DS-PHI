#include<bits/stdc++.h>
using namespace std;
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
int main()
{
     // declare dynamic object
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);

    //now linked the object
    // as we declare dynamic object, we can linked it dirctly . because it is alreay pointer
    head->next = a;
    a->next = b;
    b->next = c;


    // now print it
    // cout<<head->val<<endl;
    // cout<<head->next->val<<endl;
    // cout<<head->next->next->val<<endl;
    // cout<<head->next->next->next->val<<endl;



    // amora akoi kaj bar bar kortesi, ja head ke boltesi, tmi tmr value print kore next a jaw, tarpor abr
    // value print kore next a jaw, tarpor abar value print kore next a jaw.

    // ai kaj ta kortesi node khali pawar ag porjontto. aitai amora loop er maddhome korte parbo
    // jahatu linked list kono sequencial data rakhe na, tai er kono index o nai. tai 
    // while loop er maddome bolte hobe , ja tmi NULL na pwa porjontto loop calaw


    // akon aikhane arekta bisoy hocche, head ke jokhon loop er moddhe pass korabo, tokhon head thakbe
    // null a, r head null a thakle porobortite head er maddome value access korte parbo na. cz
    // head jokhon null a thakbe, head tokhon khali bujabe, head a kisu nai. tai head er value onno kothaw
    // save rekhe, oi copy/temp node take pass korai loop er moddhe
    // so

    node* tmp = head;
    while (tmp!=NULL)
    {
        // akta akta value print koro, and sei sathe node er next pointer er kasche jaw
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    
}