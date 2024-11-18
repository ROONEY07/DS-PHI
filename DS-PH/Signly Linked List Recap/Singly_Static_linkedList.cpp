#include<bits/stdc++.h>
using namespace std;
// create a static node
class node
{
    public:
     // akta node er duita part thkbe val, and next node er pointer
     int val;
     node* next;
     
     // jodi constructor use na kori , tahole akta akte kore value set korte hbe
};
int main()
{
    /*
       Linked list a kisu node thake, and node er duita part thake..
         1. value
         2. next node er pointer
      jate bujte pari poroborti node ta kothai ache. aita jahatu randomly thake indexing akare thake na,
      tai next node er address take amar rekhe dite hoi, jate bujte pari next node ta kothai ache..
    
    and Linked list hocce, onk gulo node er somahar.....

    R akta node a jahatu dui type er datatype diya hoi, tai amader user-define dataType lage, karon
    akoi sathe dui type er data rakhar moto kono built-in datatype nai. R sei user-define dataType ta hocce
    (CLASS).. so ai class diyei Node banano hoi...

    R ai node gulo dynamically banabo, karon ai node gulo kono function er moddhe static way te banaile
    and pore oi function ta return korle data kono hariya jai, poroborte data gulo khuje pawa jaina..


    */


   // create an object of node in static way
   node a , b, c , d;
   a.val = 10;
   b.val = 20;
   c.val = 30;
   d.val = 40;

   // now linked to nodes
   a.next = &b;
   b.next = &c;
   c.next = &d;
   d.next = NULL;

   // now print the nodes
   cout<<a.val<<endl;
   cout<<a.next->val<<endl;
   cout<<a.next->next->val<<endl;
   cout<<a.next->next->next->val<<endl;
}