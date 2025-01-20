#include<bits/stdc++.h>
using namespace std;
// push stack
void PushStack(int &top, int maxstack, char item, char stack[])
{
         if (top==maxstack)
          {
               cout<<"Overflow"<<endl;
               return;
          }
          else
          {
               cout<<"Enter the item: ";
               cin>>item;

               top= top + 1;
               cout<<"Top is: "<<top<<endl;
               stack[top] = item;
          }
}

// Pop stack
void PopStack(int &top, char item, char stack[])
{
              if (top==0)
              {
                cout<<"Underflow"<<endl;
                return;
             }
             else
             {
                 top = top - 1;
                 cout<<"Top is: "<<top<<endl;
                 item = stack[top];
             }
}

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

// main function
int main()
{
    int top, maxstack;
    char stack[10], item;

    // max size of stack
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
            // push stack
            PushStack(top, maxstack, item, stack);
        }
        else if (op==2)
        {
            // Pop stack
            PopStack(top, item , stack);
        }
        else if (op==3)
        {
            // print stack
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