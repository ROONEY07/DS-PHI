#include<bits/stdc++.h>
using namespace std;
int main()
{
     /*
         .1: PUSH(STACK, TOP, MAXSTK, ITEM)

        This procedure pushes an ITEM onto a stack.
        I. [Stack already flllcd?J
        If TOP = MAXSTK. then: Print: OVERFLOW, and Return.
        2. Set TOP: TOP + 1. I Increases TOP by I.
        3. Set STACKLTOPJ := ITEM. [Inserts ITEM in new TOP position.]
        4. Return.
    */
   
     int top, maxstack;
     char stack[10],item;

     cout<<"Enter the size of stack: ";
     cin>>maxstack;

     // Now the stack is NULL so
     top = 0;

     int flag;
     cout<<"Do you want to push value? then press 1: ";
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
               cout<<"Enter the item: ";
               cin>>item;

               top= top + 1;
               cout<<"Top is: "<<top<<endl;
               stack[top] = item;
          }
          

          cout<<"Do you want to push value? then press 1: ";
          cin>>flag;
          
     }


     // print the stack
     for (int i = 1; i <=top; i++)
     {
          cout<<"\nStack value: "<<stack[i]<<" ";
          cout<<" top is: "<<i<<endl;
     }
     
     
}