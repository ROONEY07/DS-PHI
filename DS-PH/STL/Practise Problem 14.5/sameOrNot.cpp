#include<bits/stdc++.h>
using namespace std;
int main()
{
       
       queue<int> q1;
       queue<int> q2;
       int n1;
       cout<<"Enter the size of stack 1: ";
       cin>>n1;
       cout<<"Enter the val for stack 1: ";
       for (int i = 0; i < n1; i++)
       {
           int x;
           cin>>x;
           q1.push(x);
       }

       int n2;
       cout<<"Enter the size for stack 2: ";
       cin>>n2;
       cout<<"Enter the val for stack 2: ";
       for (int i = 0; i < n2; i++)
       {
           int y;
           cin>>y;
           q2.push(y);
       }
       
       

       bool isSame = true;
       if (n1 == n2)
       {
          while (!q1.empty() && !q2.empty())
          {
              int a = q1.front();
              int b = q2.front();

              if (a!=b)
              {
                 isSame = false;
              }
              
              q1.pop();
              q2.pop();
          }
          
       }
       else
       {
          isSame = false;
       }
       
       
       if (isSame)
       {
          cout<<"Same"<<endl;
       }
       else
       {
        cout<<"Not same"<<endl;
       }
       
       
       
       
       
       
       

       
}