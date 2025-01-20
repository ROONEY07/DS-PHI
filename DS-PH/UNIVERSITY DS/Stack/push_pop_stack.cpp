#include<bits/stdc++.h>
using namespace std;
int main()
{
    // pop stack er jonno push stack proyojom
    int top, maxstack;
    char stack[10], item;   

    // push stack
    cout<<"Enter the size of stack: ";
    cin>>maxstack;

    // in initialize stage top is null
    top = 0;

    while (true)
    {
         int flag;
         cout<<"Press 1 for push and 2 for pop: ";
         cin>>flag;

         if (flag==1)
         {
              if (top==maxstack)
              {
                  cout<<"Overflow"<<endl;
                  break;
              }
              else
              {
                 cout<<"Enter the item: ";
                 cin>>item;
                 top = top + 1;
                 stack[top] = item;

              }
              
              
         }
         else if (flag==2)
         {
             if (top==0)
             {
                cout<<"Underflow"<<endl;
                break;
             }
             else
             {
                 
                 item = stack[top];
                 top = top - 1;
                 cout<<"\nitem: "<<item<<" is deleted"<<endl;
                 cout<<"Top is: "<<top<<endl;
                 
             }
             
             
         }
         else
         {
            cout<<"Invalid index"<<endl;
         }
     
         // print the stack
        for (int i = 1; i <=top; i++)
        {
            cout<<"\nstack is: "<<stack[i]<<" ";
            cout<<" top is: "<<i<<endl;
        }
    }
  
}