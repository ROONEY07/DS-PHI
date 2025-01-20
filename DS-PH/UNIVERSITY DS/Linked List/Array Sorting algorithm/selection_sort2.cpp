#include <iostream>
using namespace std;

/*
      # Algorithm 9.3

      : (Selection Sort) SELECTION(A, N)
        This algorithm sorts the array A with N elements.
        1. Repeat Steps 2 and 3 for K=I, 2.....N—I:
        2. Call MIN(A, K, N, LOC).
        3. [Interchange AIKJ and A[LOCJ.J
        Set TEMP := AIKI, A[KJ:=A[LOC) and A(LOCJ:= TEMP.
        SEnd of Step 1 loop.).
        4. Exit.
*/


// Finding the smallest element from K to N
void Min(int A[], int K, int N, int& LOC) 
{
    // Initialize MIN to the first element in the range and LOC to K
    int MIN = A[K];
    LOC = K;

    // Iterate through the array from K + 1 to N
    for (int J = K + 1; J <= N; ++J) 
    {
        if (MIN > A[J]) {
            MIN = A[J]; // Update MIN
            LOC = J;    // Update LOC
        }
    }
}

// Selection sort
void Selection(int A[], int N)
{
    for (int K = 1; K <= N - 1; K++) // Iterate from 1 to N-1
    {
        int LOC;
        Min(A, K, N, LOC); // Call Min to find the location of the smallest element
        
        // Interchange A[K] and A[LOC]
        int TEMP = A[K];
        A[K] = A[LOC];
        A[LOC] = TEMP;
    }
}

int main() {
    int N; 
    cout << "Enter the size of the array: ";
    cin >> N;
 
    // Declare the array with size N + 1 to use 1-based indexing
    int A[N + 1]; 
    cout << "Enter the array elements: ";
    for (int i = 1; i <= N; i++) // Start from 1 to N
    {
        cin >> A[i]; 
    }
    
    Selection(A, N);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 1; i <= N; i++) // Start from 1 to N
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
