#include<bits/stdc++.h>
using namespace std;
class node
{
    // akon ami jodi cai ja, alada alada node er object create kore then tar moddhe value set na kore
    // ak bare value set korte, object declartion er sathe sathe time reduce korar jonno. tahole amk
    // Constructor use korte hobe..

     public:
      int val;
      node* next;

      //declare constructor
      node(int val)
      {
          // akta node er value pass korlam and dhore nilam oita akta single node, next node er pointer
          // khali kisu na. jahatu kisu nai. tahole sekhane NULL thakar kotha, so next pointer a 
          // NULL rekhe dibo. porobortite jodi update korte cai , tahole update korbo. nahole oirokom ei thakbe

          this->val = val;
          this->next = NULL;

      }
};
int main()
{
    // declare nodes of object, and alongside pass the value into the object. cz we set as constructor
    node head(10),a(20),b(30);

    // now linked the node
    head.next = &a;
    a.next = &b;
   // and B er next a null korar dorkar nei, cz ami already next node null rakhsi


   // now print the value
   cout<<head.val<<endl;
   cout<<head.next->val<<endl;
   cout<<head.next->next->val<<endl;
}