#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declare list
    list<int> mylist;
    // take input the list
    int val;
    // cout<<"Enter the val: ";
    while (cin>>val && val!=-1)
    {
        mylist.push_back(val);
    }

    // sort the list
    mylist.sort();

    // remove the duplicate by using unique funciton
    mylist.unique();
    

    // print the list
    for(int val: mylist)
    {
        cout<<val<<" ";
    }
       
}