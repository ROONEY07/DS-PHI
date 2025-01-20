#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, front, rear;
    cout<<"Enter the size of queue: ";
    cin>>n;

    char Queue[n], item;

    front = 0;
    rear  = 0;

    while (true)
    {
         int flag;
         cout<<"Press 1 for push and 2 for pop: ";
         cin>>flag;

         if(flag == 1)
         {
              cout<<"Enter the item: ";
              cin>>item;

              if((front == 1 && rear == n) || front == rear+1)
              {
                 cout<<"Overflow"<<endl;
                 break;
              }
              else if (front == 0)
              {
                  front = 1;
                  rear = 1;
              }
              else if (rear == n)
              {
                  rear = 1;
              }
              else
              {
                rear++;
              }
              
              Queue[rear] = item;
              cout<<"\nfront="<<front<<endl;
              cout<<"rear="<<rear<<endl;
               
         }
         else if (flag == 2)
         {
              if(front == 0)
              {
                 cout<<"Underflow"<<endl;
                 break;
              }
              
              item = Queue[front];
              cout<<"\nitem: "<<item<<" is deleted"<<endl;

              if(front == rear)
              {
                front = 0;
                rear = 0;
              }
              else if (front == n)
              {
                  front = 1;
              }
              else
              {
                front++;
              }
              
              cout<<"\nfront="<<front<<endl;
              cout<<"rear="<<rear<<endl;
              
         }

        
         for (int i = 1; i <=n; i++)
         {
             cout<<"\nQueue is: "<<Queue[i]<<" ";
             cout<<" Rear is: "<<i<<endl;
         }
         
         
    }
       
}