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
    // declare object static node of object
    // node head(10),a(20),b(30),c(40);


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

    // we can do it as well as by using loop, it is the shortcut rule
    node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}