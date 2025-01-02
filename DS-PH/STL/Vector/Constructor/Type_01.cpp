#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    

    // Declare an vector
    // types 01
    // vector<int>v; // in this vector the element will be all zero 0 

    // type 02 
    // a vector with N elements (initially is has garbage value hold) and the value will be garbage.
    vector<int> v(n);
    cout<<"Enter the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    cout<<"The vectors: ";
    for (auto s:v)
    {
        cout<<s<<" ";
    }
    
}