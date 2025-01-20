#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    // Declare an array
    int Data[n];
    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>Data[i];
    }

    for (int i = 1; i < n; i++)
    {
          int temp = Data[i];
          int j = i-1;
          while (Data[j] > temp && j >=0)
          {
                Data[j+1] = Data[j];
                j--;
          }
          
          Data[j+1] = temp;
          
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<Data[i]<<" ";
    }
    
    
}                               