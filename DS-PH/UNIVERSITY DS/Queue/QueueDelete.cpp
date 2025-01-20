#include<bits/stdc++.h>
using namespace std;

// insert queue
void Queueinsert(char Queue[], int n, int &Front , int &Rear, char item)
{

       if ((Front==1 && Rear==n)|| Front == Rear+1)
       {
           cout<<"Overflow"<<endl;
           return;
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
}

// delete the queue
void QueueDelete(char Queue[], int n, int &Front , int &Rear)
{
    if(Front == 0)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    char item = Queue[Front];
    cout << "Deleted item: " << item << endl;
    if (Front == Rear)  // then Queue has only one element to start
    {
        Front = 0;
        Rear  = 0;
    }
    else if (Front == n)
    {
        Front = 1;
    }
    else
    {
        Front++;
    }
    
}

// print the Queue
void printQueue(char Queue[], int n, int &Front, int &Rear)
{
   cout<<"\nFront is: "<<Front<<endl;
   cout<<"Rear is: "<<Rear<<endl;
   for (int i = 1; i <=n; i++)
   {
       cout<<"\n Queue is: "<<Queue[i]<<" ";
       cout<<" Rear is: "<<i<<endl;
   }
}
int main()
{
   int n, Front, Rear;
   cout<<"Enter the size of queue: ";
   cin>>n;
   // declare a queue
   char Queue[n];
  
    // in the initial stage, the My Queue is NULL, so Front and Rear should be 0
    Front = 0;
    Rear = 0; 

    int op;
    cout<<"\nOption 1: insert at Queue."<<endl;
    cout<<"Option 2: Delete the Queue."<<endl;
    cout<<"Option 3: Print the Queue."<<endl;
    cout<<"Option 3: Terminated."<<endl;
   
    while (true)
    {
       cout<<"\nEnter the option: ";
       cin>>op;

       if (op==1)
       {
            char item;
            cout<<"Enter the item: ";
            cin>>item;
            Queueinsert(Queue,n,Front,Rear,item);
       }
       else if (op==2)
       {
            QueueDelete(Queue,n,Front,Rear);
       }
       else if (op==3)
       {
          printQueue(Queue, n,Front, Rear);
       }
       else if(op==4)
       {
          break;
       }
       else
       {
          cout<<"Invalid option. try again"<<endl;
       }
       
       
       
    }
    


   // print the Queue

   
}