#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1 2 3 4 4 5 6 7 7
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the array: ";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    

    bool found = false;
    int val;
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (a[i]==a[j])
            {
                found = true;
                val = a[j];
            }
            
        }
        
    }

    if (found==true)
    {
        cout<<"Duplicate is found"<<endl;
        cout<<val;
    }
    else
    {
        cout<<"Duplicate is not found"<<endl;
        cout<<val;
    }
    
    
}