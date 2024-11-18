#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5};
    
    // size of array
    int n = sizeof(a)/sizeof(a[0]);
    
    // selection sort
    // for (int i = 0; i < n-1; i++)
    // {
    //      for (int j = i+1; j < n; j++)
    //      {
    //          if (a[i] > a[j])
    //          {
    //             swap(a[i],a[j]);
    //          }
             
    //      }
         
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //    cout<<a[i]<<" ";
    // }
    
    
    // now check the input array is sorted or not in ascending order
    bool ascendingSort = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i+1])
        {
            ascendingSort = false;
            break;

        }
        
    }

    if (ascendingSort==true)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    
    
    


}