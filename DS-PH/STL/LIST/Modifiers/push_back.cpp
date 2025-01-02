#include<bits/stdc++.h>
using namespace std;
int main()
{
     // declare a list
     list<int> mylist;

     // size of list
    //  cout<<mylist.size();   
                                                                          
    // push back 
    // mylist.push_back(10);
    // mylist.push_back(20);

    // to take input as list , we have to use push back.
    // it work like, inserting at tail

    // take input the list
    int val;
    cout<<"Enter the val: ";
    while (cin>>val && val!=-1)
    {
        mylist.push_back(val);
    }
    

    // print the list
    cout<<"list value is: ";
    for(int val:mylist)
    cout<<val<<" ";
}