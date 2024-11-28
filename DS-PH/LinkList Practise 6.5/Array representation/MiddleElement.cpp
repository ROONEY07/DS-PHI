#include<bits/stdc++.h>
using namespace std;
int main()
{
      // int n;
      // cout<<"Enter the size of array: ";
      // cin>>n;

      // int a[n];
      // cout<<"Enter the array: ";
      // for (int i = 0; i < n; i++)
      // {
      //    cin>>a[i];
      // }

      // // find the middle element
      //  int low = 0;
      //  int high = a[n-1];
      //  int middle = (low+high)/2;
      // for (int i = 0; i < n; i++)
      // {
      //     if (n % 2 != 0)
      //     {
      //       //  middle = a[i];
      //        cout<<"The middle element: "<<a[middle]<<endl;
      //        break;
      //     }
      //     else
      //     {
      //       // middle = a[i+1];
      //       cout<<"The middle element is: "<<a[middle-1]<<" "<<a[middle]<<endl;
      //       break;
      //     }
          
      // }



       int n;
      cout<<"Enter the size of array: ";
      cin>>n;
      int a[n];
      cout<<"Enter the array: ";
      for (int i = 0; i < n; i++)
      {
          cin>>a[i];
      }
      
      // now print the middle element
      if (n % 2 == 1)
      {
          // then it is odd number and middle element should be single
          cout<<a[n/2]<<endl;
      }
      else
      {
          // then it is obviously even number, then we have two print both
          cout<<a[n/2-1]<<" "<<a[n/2];
      }


    //   cout<<middle<<endl;
      
}