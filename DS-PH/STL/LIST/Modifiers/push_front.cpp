#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1,2,3,4,5};

    // delete the tail
    mylist.push_back(6);

    // delete the head
    mylist.push_front(100);

    // print the node
    for(int val:mylist)
    cout<<val<<" ";
}