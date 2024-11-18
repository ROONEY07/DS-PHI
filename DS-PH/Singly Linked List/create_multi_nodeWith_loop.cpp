#include<bits/stdc++.h>
using namespace std;
// but we can declare multi nodes, and access them by loop
class node
{
    public:
      int val;
      node* next;
};
int main()
{
    //create nodes of object
    node head,a,b,c,d,tmp;
    // now set the value of these object
    head.val = 10;
    a.val = 20;
    b.val = 30;
    c.val = 40;
    d.val = 50;

    //ai value gulo memory te bissino akare ache, that means. non contigoues.
    // ai gulo ke link kore rakhle, first value er maddhome sob gulo access kora jabe

    // linked the nodes
    head.next = &a;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;


    // declare a temp node to store the head;
    


    // akon akta akta kore value access korte caile onk smy lagbe. so we can use loop
    // ai loop er jonno, akta head node lagbe and akta tmp node lagbe, jate head node ke tmp er moddhe copy kore
    // rekhe oitake loop er moddhe pass kore rakhte pari. 
    // karon loop er moddhe jai node ke pass korbo, condition amn thakbe ja, jai porjontto NULL na paiso
    // oi porjontto loop calabe and akta akta value add korbe.
    // aita korle jai node ke amora loop er moddhe dibo loop sesh e oi node ta NULL a thakbe, and oi 
    // node diya baki value gulo ke access korte caile ta r korte parbo na, cz node akon NULL a.



}
