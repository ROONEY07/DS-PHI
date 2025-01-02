#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declare list
    list<int> mylist = {1,2,3,2,4,2,6,5};

    // remove duplicate value in list
    // Before it remove duplicate it must be sorted
    mylist.sort();

    // now remove duplicate
    mylist.unique();

    // print the list
    for(int val: mylist)
    cout<<val<<" ";   
}