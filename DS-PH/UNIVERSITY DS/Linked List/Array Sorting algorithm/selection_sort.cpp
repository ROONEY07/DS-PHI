#include <iostream>
using namespace std;

/*
      # Algorithm 9.2

      MIN(A, K, N, LOC)
        An array A is in memory. This procedure finds the location LOC of the smallest
        element among A[K], A[K + 1],..., A[N].
        1. Set MIN = A[K] and LOC = K. [initializes pointers.]
        2. Repeat for J = K + 1, K + 2,..., N:
        If MIN > A[J], then: Set MIN = A[J] and LOC = J.
        [End of loop.]
        3. Return
*/

void Min(int A[], int K, int N, int& LOC) 
{
    // Initialize MIN to the first element in the range and LOC to K
    int MIN = A[K];
    LOC = K;

    // Iterate through the array from K + 1 to N
    for (int J = K + 1; J <= N; J++) 
    {
        if (MIN > A[J]) 
        {
            MIN = A[J]; // Update MIN
            LOC = J;    // Update LOC
        }
    }
}

int main() {
    int N; 
    cout << "Enter the size of the array: ";
    cin >> N;
 
    // Declare the array
    int A[N]; 
    cout << "Enter the array elements: ";
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i]; 
    }
    
    int K;
    cout << "Enter the starting index K : ";
    cin >> K;

    int LOC;
    
    Min(A, K, N, LOC); // N - 1 to make it zero-based

    cout << "The location of the smallest element between indices "<< K << " and " << N<< " is: " << LOC << endl;
    cout<<"The smallest value is: " << A[LOC] << endl;

    return 0;
}













