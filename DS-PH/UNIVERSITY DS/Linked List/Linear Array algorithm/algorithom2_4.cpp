#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
     # Algorithom 2.4
          
          alogorithom (2.4, 4.5) -> finding the specific value and its location

          A linear array Data with n elements and a specific item of information are given. This algorithom finds the loc of item in the array of Data or sets loc = 0

          1. set k=1, and loc = 0
          2. Repeat 3 and 4 while k<=n
                  if(item==Data[k]) then
                      set loc = k
          3.      k++
              end of loop structure
          4. if loc==0
                write "The item is not in the array Data"
             else 
                write "The item is in the array Data"                   

       
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

   int k = 1, loc=0;

   while (k<=n)
   {
        if (item==Data[k])
        {
            loc=k;
        }
        k++;
        
   }
   
   if (loc==0)
   {
      cout<<"The item is not in the array Data. ";
   }
   else
   {
      cout<<"The item is in the Array Data";
   }
   
   
   
   
}