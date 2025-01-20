#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
     v.push_back(x);
     // current size of vector
     int curridx = v.size()-1;
     while (curridx != 0)
     {
         int parentIdx = (curridx-1)/2;
         if(v[curridx] > v[parentIdx])
         {
             swap(v[curridx],v[parentIdx]);
         }
         else
         {
            break;
         }
         curridx = parentIdx;
     }
     
     
}

void delete_heap(vector<int> &v)
{

}
int main()
{
      int n;
      cout<<"Enter the size of vector: ";
      cin>>n;
      
      // declare vector
      vector<int> v;
      cout<<"Enter the max heap: ";
      for (int i = 0; i < n; i++)
      {
          int x;
          cin>>x;
          insert_heap(v,x);
      }

      for(int val: v) cout<<val<<" ";
      
}
