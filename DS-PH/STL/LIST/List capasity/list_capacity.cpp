#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int> mylist = {1,2,3,4,5};

//    mylist.clear();
//    // size of list
//    cout<<mylist.size();
//    cout<<endl;
//    // print the list
//    for(int val:mylist)
//    cout<<val<<" ";  


    list<int> newList;
    newList = mylist;
    for(int val:newList)
    cout<<val<<" ";
}