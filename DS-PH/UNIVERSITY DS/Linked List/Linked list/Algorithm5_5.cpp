#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the size of array: ";
     cin>>n;

     // declare an linked list 
     int ptr, start, link[n], avail, NEW,loc;
     char info[n], item;

     cout<<"Start the node: ";
     cin>>start;

     ptr = start;
     // take input the linked list
     while (ptr!=0)
     {
          cout<<"Enter info: ";
          cin>>info[ptr];
          cout<<"Enter Next node: ";
          cin>>link[ptr];

          ptr = link[ptr];
     }

     
     cout<<endl;
     cout<<"The available node is: ";
     cin>>avail;

     ptr = avail;
     // take input the available list
     while (ptr!=0)
     {
          cout<<"Next available link is: ";
          cin>>link[ptr];
          ptr = link[ptr];
     }


     cout<<endl;
     cout<<"Linked list is start from: "<<start<<endl;
     ptr = start;
     // print the available list
     while (ptr!=0)
     {
          cout<<"\ninfo: "<<info[ptr]<<" ";
          cout<<" Next node: "<<link[ptr]<<endl;
          ptr = link[ptr];
     }
     
     cout<<endl;
     cout<<"Available start from: "<<avail<<endl;
     ptr = avail;
     // print the available list
     while (ptr!=0)
     {
          cout<<"Next avaiable link: "<<link[ptr]<<endl;
          ptr = link[ptr];
     }
     
     cout<<endl<<endl;

     cout<<"Enter the item: ";
     cin>>item;
     cout<<"Enter the loc to insert: ";
     cin>>loc;
     // take insert the info
     if (avail==0)
     {
          cout<<"OVERFLOW"<<endl;
     }
     
          NEW = avail;
          avail = link[avail];
          info[NEW] = item;

          if (loc==0)
          {
               link[NEW] = start;
               start = NEW;
          }
          else
          {
               link[NEW] = link[loc];
               link[loc] = NEW;
          }



    
     
     cout<<endl;
     cout<<"Updated link List is: "<<endl;
     cout<<"start form: "<<start<<endl;
     ptr = start;
     while (ptr!=0)
     {
          cout<<"\ninfo: "<<info[ptr]<<" ";
          cout<<" Next node: "<<link[ptr]<<endl;
          ptr = link[ptr];
     }
     cout<<endl;
     cout<<"Updated available node is: "<<avail<<endl;
     ptr = avail;
     while (ptr!=0)
     {
          cout<<"Available node is: "<<link[ptr]<<endl;
          ptr = link[ptr];
     }
     
     
}