#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {1,2,3,4,5};

    // delete the tail
    mylist.pop_back();

    // delete the head
    mylist.pop_front();

    // print the node
    for(int val:mylist)
    cout<<val<<" ";
}