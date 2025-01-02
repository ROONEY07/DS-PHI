#include<iostream>
using namespace std;

int main()
{
    int front=0,rear=0,n,flag,i;
    cout<<"Maximum queue size:";
    cin>>n;
    char queue[10],item;

    while(1)
    {
        cout<<"Press 1 for insert or 2 for delete : Option?";
        cin>>flag;

        //Insert
        if(flag==1)
        {
            if((front==1 && rear==n)|| (front==rear+1))
                {
                    cout<<"Overflow.";
                    break;
                }
            if(front==0)
            {
                front=1; 
                rear=1;
            }
            else if(rear==n)
                rear=1;
            else
                rear=rear+1;

            cout<<"Item=";
            cin>>item;
            queue[rear]=item;

             ///Output
             cout<<"\nfront="<<front<<endl;
             cout<<"rear="<<rear<<endl;

            for(i=1;i<=n;i++)
                cout<<"index="<<i<<" , value="<<queue[i]<<endl;
        }
        //Delete
        else if(flag==2)
        {
            if(front==0)
               {
                cout<<"underflow.";
                break;
               }
            item=queue[front];


            if(front==rear)
            {
                front=0; 
                rear=0;
                cout<<"\nItem "<<item<<" has been delete.";
            }
            else if(front==n)
                {
                    front=1;
                    cout<<"\nItem "<<item<<" has been delete.";
                }
            else
                {
                    front=front+1;
                    cout<<"\nItem "<<item<<" has been delete.";
                }

            ///Output
            cout<<"\nfront="<<front<<endl;
            cout<<"rear="<<rear<<endl;


            for(i=1;i<=n;i++)
                cout<<"index="<<i<<" , value="<<queue[i]<<endl;
        }

        else
            {cout<<" Exit"; break;}

    }

    return 0;
}