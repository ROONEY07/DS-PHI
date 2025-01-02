#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declarre list
    list<int> mylist = {1,2,3,4,4,5,6};

    // find the val 4
    auto it = find(mylist.begin(),mylist.end(),4);

    if (it==mylist.end()) // end() function list seshe NULL ke point kore
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    
       
}