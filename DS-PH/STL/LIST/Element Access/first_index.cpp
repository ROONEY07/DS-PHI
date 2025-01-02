#include<bits/stdc++.h>
using namespace std;
int main()
{
     // declare a list
     vector<int> v = {11,22,33,44,55};
     list<int> mylist = {1,2,3,4,5};

     // size of vector
     int n = v.size();

     // print the first and last index for vector
     cout<<v[0]<<endl;
     cout<<v[n-1];

     // print the first and last  index for list
     cout<<endl<<endl;
     cout<<mylist.front()<<endl;
     cout<<mylist.back()<<endl;
    

    // print any index for vector
    cout<<v[3]<<endl;


    // but as the list does not support the indexing 
    // so we can not print id directly, we have to print it by using iterator
    cout<<*next(mylist.begin(),3); // and aita jahatu pointer orthat adress ferot dey, tai value print korar jonno de-reference use kora lagbo
}