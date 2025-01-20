#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for (int i = 1; i <= test; i++)
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

            for (auto it = s.begin(); it != s.end(); it++)
            {
                cout<<*it<<" ";
            }
            cout<<endl;
    }
    
    
       
}