#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> v(n);
    // cout<<"Enter the value: ";
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }

    priority_queue<int,vector<int>, greater<>> pq;
    for (int i = 0; i <n; i++)
    {
        pq.push(v[i]);
    }

    
    // quries
    int quries;
    // cout<<"Enter the quries: ";
    cin>>quries;
    while (quries--)
    {
                int command;
                // cout<<"\n0.push"<<endl;
                // cout<<"1.print"<<endl;
                // cout<<"2.delete"<<endl;
                cin>>command;
                if(command == 0 )
                {
                    int x;
                    cin>>x;
                    pq.push(x);
                    if(pq.empty())
                    {
                        cout<<"Empty"<<endl;
                    }
                    else
                    {
                        cout<<pq.top()<<endl;
                    }
                }
                else if (command == 1)
                {
                    if(pq.empty())
                    {
                        cout<<"Empty"<<endl;
                    }
                    else
                    {
                        cout<<pq.top()<<endl;
                    }
                    
                }
                else if (command == 2)
                {
                    if(pq.empty())
                    {
                        cout<<"Empty"<<endl;
                    }
                    else
                    {
                        pq.pop();

                        if(pq.empty())
                        {
                            cout<<"Empty"<<endl;
                        }
                        else
                        {
                            cout<<pq.top()<<endl;
                        }
                    }
                }
                else
                {
                    break;  
                }
            
    }
    
    
       
}