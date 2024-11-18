#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5};

    // the size of array
    int n = sizeof(a)/sizeof(a[0]);

    // the maximum value will be
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        
    }

    cout<<max;    
    
}