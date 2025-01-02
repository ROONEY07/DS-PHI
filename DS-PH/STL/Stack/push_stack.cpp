#include<bits/stdc++.h>
using namespace std;
int main()
{
    int top, maxstack;
    int stack[10], val;

    // size of stack
    cout<<"Enter the size of stack: ";
    cin>>maxstack;

    // in the initial stage the top is NULL
    top = 0;
    int flag;
    cout<<"Do you want to push value: ";
    cin>>flag;
    while (flag==1)
    {
        if (top==maxstack)
        {
            cout<<"Overflow"<<endl;
            break;
        }
        else
        {
            cout<<"Enter the val: ";
            cin>>val;

            top++;
            cout<<"The top is: "<<top<<endl;
            stack[top] = val;
        }
        
         cout<<"Do you want to push value: ";
         cin>>flag;
    }

    for (int i = 1; i <= top; i++)
    {
        cout<<"\nStack value is: "<<stack[i]<<" ";
        cout<<" top is: "<<i<<endl;

    }
    
       
}