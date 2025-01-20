#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
     # Algorithom 2.3
          
          A non-empty array Data with N numerical value is given. This algorithom finds the LOC and the value MAX of the largest element of the array Data

          1. set k = 1, loc = 1 and max = Data[1]
          2. Repeat 3 and 4 while (k<=n)
                    if(max<Data[k]) then
                        set loc = k and
                            max = Data[k]
          3.        k = k+1
                     end of loop
          4. write loc, max and exit

       
    */

   int n;
   cout<<"Enter the size of array: ";
   cin>>n;

   // declare an array
   int Data[n];
   cout<<"Enter the Array: ";
   for (int i = 1; i <= n; i++)
   {
        cin>>Data[i];
   }

   // now find the loc and max value
   int k = 1, loc = 1;
   int max = Data[1];
   while (k<=n)
   {
        if (max<Data[k])
        {
            loc = k;
            max = Data[k];
        }
        k++;
        
   }
   
   cout<<"The location of the value is: "<<loc<<endl;
   cout<<"The max value is: "<<max<<endl;
   
   
}