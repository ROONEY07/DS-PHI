#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5,6};

    // findout the size
    int size = sizeof(a)/sizeof(a[0]);

    // now print the middle element
    if (size % 2 == 1)
    {
        // then it is odd number and middle element should be single
        cout<<a[size/2]<<endl;
    }
    else
    {
        // then it is obviously even number, then we have two print both
        cout<<a[size/2-1]<<" "<<a[size/2];
    }
    
    
}