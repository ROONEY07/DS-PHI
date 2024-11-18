#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declare an array
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    //declare an array
    int a[n];
    // now take input the array
    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // now short it..
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
       
              if (a[i] > a[j])
              {
                  swap(a[i],a[j]);
              }
              
        }
        
    }

    // now print the array
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
}