#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declare list
    list<int> mylist = {1,2,3,4,5};

    // insert at position 3
    mylist.insert(next(mylist.begin(),3),100);   

    // print the list
    for(int val:mylist)
    cout<<val<<" ";


}