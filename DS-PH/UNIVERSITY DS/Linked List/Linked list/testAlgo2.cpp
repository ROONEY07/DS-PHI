#include<bits/stdc++.h>
using namespace std;
int main()
{
     int ptr, start, link[10];
     char info[10], item;

     // start the node
     cout<<"start: ";
     cin>>start;
     ptr = start;

     // take input the node
     while (ptr!=0)
     {
          cout<<"Enter info: ";
          cin>>info[ptr];
          cout<<"next node: ";
          cin>>link[ptr];
          // and update the node
          ptr = link[ptr];
     }

     // Seraching the specific item
     cout<<endl;
     cout<<"start: "<<start<<endl;
     ptr = start;
     cout<<"Enter the item to search: ";
     cin>>item;
     while (ptr!=0)
     {
          if (info[ptr]==item)
          {
               cout<<"The "<<item<<" is found in the node"<<endl;
               cout<<"The location of the node is: "<<ptr<<endl;
               break;
          }
          else
          {
               ptr = link[ptr];
          }
          
           
     }
     if (ptr==0)
     {
          cout<<"The item "<< item<<" is not found in the node"<<endl;
     }
     
     return 0;
}