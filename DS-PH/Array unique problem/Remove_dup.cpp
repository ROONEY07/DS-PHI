#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the size of linked list: ";
   cin>>n;

   int a[n];
   cout<<"Enter the linked list: ";
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
   }


   // remove duplicate
   
   int tmp[n];
   int j = 0;
   for (int i = 0; i < n-1; i++)
   {
       if (a[i]!=a[i+1])
       {
           tmp[j] = a[i];
           j++;
       }
     tmp[j] = a[n-1];
   }

   // print the array
   for (int i = 0; i < j+1; i++)
   {
       cout<<tmp[i]<<" ";
   }
   
   
   
   
      
}