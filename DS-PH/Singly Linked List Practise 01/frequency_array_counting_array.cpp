#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Declare an array
    int a[n];

    // Take input from the user of array
    cout << "Enter the value of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Declare an array that counts the number
    int count[n] = {0};

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    // // Print the frequency of each element
    // for (int i = 0; i < n; i++) 
    // {
    //     if(count[i]!=0)
    //     {
    //         cout << i << " - " << count[i] << endl;
    //     }
    // }


    // check here is have any duplicate or not
    // we can do it with bool function
    bool duplicate = false;
    for (int i = 0; i < n; i++) 
    {
        if(count[i]!=0)
        {
            duplicate = true;
            break;
        }
    }

    if (duplicate==true)
    {
        cout<<"the array contain duplicate"<<endl;
    }
    else
    {
        cout<<"The array does not any duplicate"<<endl;
    }
    
    
    return 0;
}