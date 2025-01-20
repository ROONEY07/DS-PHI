#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
        # Algorithom 9.1
        This algorithom sorts the array A with n elements.
        
        1, set A[0] = - infinite
        2. Repeat 3 to 5 for k = 2,3... to n
        3.   set temp = a[k] and ptr = k-1
        4.     Repeat while a[ptr] > temp
                        set a[ptr+1] = a[ptr]
                        set ptr = ptr -1
                 end of inner loop
        5. set a[ptr+1] = temp
           end of outer loop
        6. exit

    */
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    // Declare an array
    int a[n];
    cout<<"Enter the array: ";
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    a[0] = INT_MIN;
    for (int k = 2; k <= n; k++)
    {
         int temp = a[k];
         int ptr = k-1;
         while (a[ptr] > temp && ptr >= 0)
         { 
               // jodi Data[ptr] -> orthat sorted array jodi boro hoi unsorted array theke tahole 
               // sorted er value ke unsorted array temp er moddhe swap kore daw
               a[ptr+1] = a[ptr];
               ptr--;
         }
         // and unsorted array temp er value ke sorted array er moddhe swap kore daw
         a[ptr+1] = temp; 
         

    }

    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
} 