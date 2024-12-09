#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the size of array 1: ";
    cin >> n1;
    int a[n1];
    cout << "Enter the values of array 1: ";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter the size of array 2: ";
    cin >> n2;
    int b[n2];
    cout << "Enter the values of array 2: ";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    // Check if the sizes are different
    if (n1 != n2) {
        cout << "Not same" << endl;
        return 0;
    }

    // Compare elements directly after sorting
    for (int i = 0; i < n1; i++) 
    {
        if (a[i] != b[i]) 
        {
            cout << "Not same" << endl;
            return 0;
        }
    }

    cout << "Same" << endl;
    return 0;
}