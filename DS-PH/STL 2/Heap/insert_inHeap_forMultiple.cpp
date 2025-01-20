#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
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
    }
    
    
    // print 
    for (int val:v) cout<<val<<" ";
    
}