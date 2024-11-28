#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Check if array is sorted in ascending order
    bool isAscending = true;
    for (int i = 1; i < n; i++)  // Start from the second element
    { 
        if (a[i] < a[i - 1])   // If any element is smaller than the previous one
        {   
            isAscending = false;  // jodi akta element o false paw taile break kore daw
            break;
        }
    }

    // Check if array is sorted in descending order
    bool isDescending = true;
    for (int i = 1; i < n; i++)  // Start from the second element
    { 
        if (a[i] > a[i - 1])   // If any element is bigger than the previous one
        {   
            isAscending = false;
            break;
        }
    }

    // Determine the result
    if (isAscending) {
        cout << "Array is in ascending order" << endl;
    } else if (isDescending) {
        cout << "Array is in descending order" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
