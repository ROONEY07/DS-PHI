#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
         QINSER1'(QULUL, N, FRONT, REAR, ITEM)
        This procedure inserts an element ITEM into a qUCUC.
        1. (QucUC already tillcd?j
        If FRONT= I and REAR = N, or if FRONT = REAR 4 1. then:
        Write: OVERFLOW, arid :Return.
        2. [Find new value of REAR]
        If FRONT: = NULL, then: IQucuc initially empty.]
        Set FRONT I and REAR I.
        Else if REAR = N, then:
        Set REAR I.
        Else:Set REARREAR+ I.
        lEnd of If structure.]
        3. Set QL.EUEIREAR1 ITEM. (This inserts new e1cmcnt.1
        4. Return

    */
   
   int n, Front, Rear;
   cout<<"Enter the size of queue: ";
   cin>>n;
   // declare a queue
   char Queue[n];

   // in the initial stage, the My Queue is NULL, so Front and Rear should be 0
   Front = 0;
   Rear = 0;   

   int flag;
   cout<<"Do you want to push val.If yess press 1: ";
   cin>>flag;
   
   while (flag==1)
   {
       char item;
       cout<<"Enter the item: ";
       cin>>item;

       if ((Front==1 && Rear==n)|| Front == Rear+1)
       {
           cout<<"Overflow"<<endl;
       }
       if (Front==0) // the queue is initially empty
       {
          Front = 1;
          Rear = 1;
       }
       else if (Rear == n)
       {
          Rear = 1;
       }
       else
       {
         Rear++;
       }
       
       // otherwise insert the item into Queue
       Queue[Rear] = item;
       
       cout<<"Do you want to push val.If yess press 1: ";
       cin>>flag;
   }
   

   // print the Queue
   cout<<"\nFront is: "<<Front<<endl;
   cout<<"Rear is: "<<Rear<<endl;
   for (int i = 1; i <=Rear; i++)
   {
       cout<<"\n Queue is: "<<Queue[i]<<" ";
       cout<<" Rear is: "<<i<<endl;
   }
   
}