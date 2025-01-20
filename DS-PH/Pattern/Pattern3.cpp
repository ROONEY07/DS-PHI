#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for (int i = 1; i <= n; i++)
   {
       cin>>a[i];
   }
      
   int x;
   cin>>x;
   for (int i = 1; i <= n; i++)
   {
       if (a[x] == 0)
       {
          a[x] = 1;
       }
       else
       {
          a[x] = 0;
       }
       
       
   }

   for (int i = 1; i <= n; i++)
   {
       cout<<a[i]<<" ";
   }
   
}