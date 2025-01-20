#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {50,40,45,30,35,42,32,25,20,10};
    int x;
    cout<<"Enter the value to insert: ";
    cin>>x;
    
    // insert the value to the vector
    v.push_back(x);

    int currIndex = v.size()-1;
    // cout<<currIndex<<endl;

    while (currIndex!=0)
    {
        int parentIndex = (currIndex-1)/2;
        // cout<<parentIndex<<endl;
        if(v[currIndex] > v[parentIndex])
        {
            swap(v[currIndex],v[parentIndex]);
        }
        else
        {
            break;
        }
        
        currIndex = parentIndex;
    }
    
    // print 
    for (int val:v) cout<<val<<" ";
    
}