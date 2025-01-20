#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"Enter te size of array: ";
   cin>>n;

   int a[n];
   cout<<"Enter the array: ";
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
   }

   int middle = n/2;
   if (n % 2 == 1)
   {
      cout<<a[middle]<<endl;
   }
   else
   {
      cout<<a[middle-1]<<" "<<a[middle]<<endl;
   }
   
   
      
}