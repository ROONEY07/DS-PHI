#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5,6};

    // now declare a size of array
    int n = sizeof(a)/sizeof(a[0]);

    
        if (n % 2 == 1)
        {
            // the array become odd size of . so the middle element must be single
            cout<<"The middle element: "<<a[n/2]<<endl;
        }
        else
        {
            // the array become even size of, so the middle element must be double
            cout<<"The middle element: "<<a[n/2-1]<<" "<<a[n/2];
        }
        
    
    
    
}