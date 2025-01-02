#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declare list
    list<int> mylist = {1,3,4,2,6,5};

    // reverse list
    // mylist.sort();
    mylist.sort(greater<int>());
    // print the list
    for(int val: mylist)
    cout<<val<<" ";   
}