#include<bits/stdc++.h>
using namespace std;
// reverse print array by function
void reverprint(int a[], int n)
{
    // base case
    if(n<=0) return;

    cout<<a[n-1]<<" ";
    reverprint(a,n-1);
    
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the array:  ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
   reverprint(a,n);
       
}