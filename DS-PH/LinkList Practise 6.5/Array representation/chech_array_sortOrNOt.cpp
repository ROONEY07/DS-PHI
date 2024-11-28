#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                found = true;
            }
            
        }
        
    }
    
    
    if (found==true)
    {
        cout<<"Ascending order"<<endl;
    }
    else
    {
        cout<<"It is not in ascending order"<<endl;
    }
    
    
   
    

    
    

    


    
    
    
}