#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
     # Algorithom 2.1

       A non-empty array Data with N numerical value is given.this algorithom
       finds LOC and the value max of the largest element of the array Data
       
       1. set k=1, loc=1, max=Data[1];
       2. set k=k+1;
       3. if(k>n) then
            write loc,max and exit
       4. if(max<data[k]) then
             set loc = k and
                 max = Data[k];
       5. Repeat loop go to step 2
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
   int k=1, loc=1;
   int max = Data[1];
   do
   {
       k++;
       if (k>n)
       {
           cout<<"The location of the value is: "<<loc<<endl;
           cout<<"The max value is: "<<max<<endl;
       }
       if (max<Data[k])
       {
           loc =k;
           max = Data[k];
       }
       
         
   } while (k<=n);
   
   
}