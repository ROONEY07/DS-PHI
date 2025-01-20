#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
        Algorithom 4.4
         Here Data is an array with n elements . This algorithom sorts the array

         1.Repeat 2 and 3 for k=1 to n-1
         2. set ptr = 1
         3.  Repeat while ptr<=n-k
         4.     if Data[ptr] > Data[ptr+1] then
         5.              interchange Data[ptr], Data[ptr+1]
                    end of inner loop
         6. set ptr++
            end of outer loop
         7. exit
    */

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Declare an array
    int Data[n];
    cout << "Enter the array: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> Data[i];
    }

    for (int k = 1; k <= n - 1; k++)
    {
        int ptr = 1;
        while (ptr <= n - k)
        {
            if (Data[ptr] > Data[ptr + 1])
            {
                swap(Data[ptr], Data[ptr + 1]);
            }
             ptr++;
        }
       
    }

    for (int i = 1; i <= n; i++)
    {
        cout << Data[i] << " ";
    }
}