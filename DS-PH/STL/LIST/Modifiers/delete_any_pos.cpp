#include<bits/stdc++.h>
using namespace std;
int main()
{
     // declare list
     list<int>mylist = {1,2,3,4,5,6,7,8};

     // delete pos 3
    //  mylist.erase(next(mylist.begin(),3));

     
     // delete multiple
     mylist.erase(next(mylist.begin(),3), next(mylist.begin(),6));

     // print the list
     for(int val:mylist)
     cout<<val<<" ";   
}