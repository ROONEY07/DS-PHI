#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    //search the value
    if(s.count(20))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
       
}