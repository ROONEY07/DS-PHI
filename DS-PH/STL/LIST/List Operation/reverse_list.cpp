#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declare list
    list<int> mylist = {1,2,3,4,5};

    // reverse list
    mylist.reverse();

    // print the list
    for(int val: mylist)
    cout<<val<<" ";   
}