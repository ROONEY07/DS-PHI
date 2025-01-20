#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
         Enter the adjacency matrix: 
        0 1 0 1 0
        1 0 1 0 0
        0 1 0 1 1
        1 0 1 0 1
        0 0 1 1 0
    */
     char nodes[5];
     cout<<"Take input the nodes: ";
     for (int i = 0; i < 5; i++)
     {
        cin>>nodes[i];
     }

     // declare adjacency matrix
     int adjMatric[5][5];
     cout<<"Enter the adjacency matrix: "<<endl;
     for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < 5; j++)
        {
            cin>>adjMatric[i][j];
        }
        
     }

     cout<<"The adjacency list is: "<<endl;
     for (int i = 0; i < 5; i++)
     {
         cout<<nodes[i]<<" : ";
         for (int j = 0; j < 5; j++)
         {
            if(adjMatric[i][j] != '\0')
            {
                cout<<nodes[j]<<" ";
            }
         }
         cout<<endl;
         
     }
     
     
        
}