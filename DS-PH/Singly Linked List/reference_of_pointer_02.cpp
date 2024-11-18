#include<bits/stdc++.h>
using namespace std;
int fun(int &a)
{
    a = 50;
    cout<<a<<endl;

    // refercence akare pass korle, variable er address akare jai, so tohkon fun and main function er 
    // address same hoi . tokhon internally fun function theke value change korle main thekeo change hoya jai
}
int main()
{
    int a;
    a = 5;
    fun(a);
    cout<<a<<endl;
}