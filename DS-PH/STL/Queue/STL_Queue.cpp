#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cout<<"Enter the size of queue: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    // print the queue
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
       
}