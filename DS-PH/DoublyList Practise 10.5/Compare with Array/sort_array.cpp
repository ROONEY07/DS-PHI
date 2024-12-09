#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cout << "Enter the size of array 1: ";
    cin >> n;
    int a[n];
    cout << "Enter the values of array 1: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }


    // sorting
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

    for (int i = 0; i < n; i++) 
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}