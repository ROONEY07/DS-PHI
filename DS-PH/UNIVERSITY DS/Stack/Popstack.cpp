#include<bits/stdc++.h>
using namespace std;
// print the stack
void printStack(int top, char stack[])
{
     // print the stack
    for (int i = 1; i <=top; i++)
    {
        cout<<"\nstack is: "<<stack[i]<<" ";
        cout<<" top is: "<<i<<endl;
    }
}
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

    int op;
    cout<<"\nOption 1: push stack"<<endl;
    cout<<"Option 2: pop stack"<<endl;
    cout<<"Option 3: Print the stack"<<endl;
    cout<<"Option 4: Terminated"<<endl;

    while (true)
    {
         cout<<"\nEnter the option: ";
         cin>>op;

         if (op==1)
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
                 cout<<"Top is: "<<top<<endl;
                 stack[top] = item;
              }
              
              
         }
         else if (op==2)
         {
             if (top==0)
             {
                cout<<"Underflow"<<endl;
                break;
             }
             else
             {
                 
                 item = stack[top];
                 cout<<"item: "<<item<<" is deleted"<<endl;
                 top = top - 1;
                 cout<<"Top is: "<<top<<endl;
                 
             }
             
             
         }
         else if (op==3)
         {
             printStack(top,stack);
         }
         
         else if (op==4)
         {
            break;
         }
         else
         {
            cout<<"Invalid index"<<endl;
         }
     
         
    }
  
}