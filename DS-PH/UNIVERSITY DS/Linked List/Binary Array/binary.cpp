#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the size of array: ";
     cin>>n;

     // Declare an array
     int a[n];
     cout<<"Enter the array: ";
     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }


     // Binary operation
     int item;
     cout<<"Enter the item to search: ";
     cin>>item;
     int low = 0;
     int high = n-1;

     int found = 0;
     int index = -1;
     while (low<=high)
     {
          int mid = (low+high)/2;

          if (item==a[mid])
          {
              found = 1;
              index = mid;
              break;
          }
          if (item > a[mid])
          {
              low = mid+1;
          }
          else
          {
            high = mid-1;
          }
          
     }
     
     if (found==0)
     {
        cout<<"Item is not found"<<endl;
     }
     else
     {
        cout<<"Item is found in the array"<<endl;
        cout<<"The index of item is: "<<index<<endl;
        
     }
     
     

     
        
}