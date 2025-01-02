#include<bits/stdc++.h>
using namespace std;
int main()
{
     // push back mane hocche, tail a insert kora
    // push front mane hochhe, head a insert kora  
   // pop back mane hocche tail node delete kore
   // pop front mane hocche head delete kora




     // declare list 
    list<int> mylist = {1,2,3,4,5};
  
    // assign list into another list
    list<int> newList;

    // method 1
//     newList = mylist;

    // method 2
   newList.assign(mylist.begin(), mylist.end());

     // print the list
     for(int val: newList)
     cout<<val<<" ";   
}