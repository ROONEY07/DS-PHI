#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
     # alogorithom (2.4, 4.5) -> finding the specific value and its location
     # Algorithom 4.5
     A linear array Data with n element and a specific item of information are
     given. This algorithom finds the loc of item in the array Data and sets
     loc = 0 it it is unseccessfull

     1. set Data[n+1] = item
     2. set loc = 1
     3. Repeat while Data[loc]!=item
                loc++
     4. if loc==n+1
          loc=0 or
          write : item is not found
     5. exit
          
          

      

       
    */

   int n;
   cout<<"Enter the size of array: ";
   cin>>n;

   // declare an array.0
   int Data[n];
   cout<<"Enter the Array: ";
   for (int i = 1; i <= n; i++)
   {
        cin>>Data[i];
   }

   // now find the specific item in the array
   int item;
   cout<<"Enter the item: ";
   cin>>item;

    Data[n+1] = item;
    int loc = 1;
    while (Data[loc]!=item)
    {
        loc++;
    }

    if (loc==n+1)
    {
        loc=0;
        cout<<"The item is not found";
    }
    else
    {
     cout<<"The item is found";
    }
    
    
    
   
   
   
   
}