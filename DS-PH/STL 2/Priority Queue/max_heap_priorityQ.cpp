#include<bits/stdc++.h>
using namespace std;
int main()
{
      priority_queue<int> pq;
      while (true)
      {
           int commad;
           cout<<"\n0.insert"<<endl;
           cout<<"1.delete"<<endl;
           cout<<"2.print top"<<endl;
           cin>>commad;
           if(commad == 0) // for insert value
           {
                int x;
                cin>>x;
                pq.push(x); // logn
           }
           else if (commad == 1) // for pop the value
           {
               pq.pop();
           }
           else if (commad == 2) // for print the top
           {
               cout<<pq.top()<<endl;
           }
           else
           {
            break;
           }
           
           
           
      }
         
}