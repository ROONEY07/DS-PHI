#include<bits/stdc++.h>
using namespace std;
// selection sort
void selection_Sort(int a[], int n)
{
       for (int i = 0; i < n-1; i++)
       {
             int min = i;
             for (int j = i+1; j < n; j++)
             {
                  if (a[j]<a[min])
                  {
                     min = j;
                  }
                  
             }
             swap(a[i],a[min]);
             
       }
       
}
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
        selection_Sort(a,n);
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        


}