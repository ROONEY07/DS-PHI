#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
      int val;
      node* next;
};
int main()
{
    // create two nodes a and b
    node a,b;
    a.val = 10;
    b.val = 20;

    // now connect the nodes
    a.next = &b;
    b.next = NULL;

    // now print the nodes
    cout<<a.val<<" "<<a.next->val<<endl;
    // cout<<b.val<<endl;
}