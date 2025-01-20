#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
      For available node
    */   

   int n;
   cout<<"Enter the size of linked list: ";
   cin>>n;

   int ptr, start , link[n], avail; // here link is for go to the next node
   char info[n], item;

   // start the node
   cout<<"Start the node: ";
   cin>>start;

   // store the start into ptr to move the next node
   ptr = start;

   // Take input the node
   while (ptr!=0)
   {
      cout<<"Input info: ";
      cin>>info[ptr];
      cout<<"Next node: ";
      cin>>link[ptr];

      // move the ptr
      ptr = link[ptr];
   }

   // Now the avail as a input
   cout<<endl;
   cout<<"The available Memory: ";
   cin>>avail;
   ptr = avail;

   // Now take input the available node
   while (ptr!=0)
   {
       cout<<"Input the next available node index: ";
       cin>>link[ptr];
       ptr = link[ptr];
   }


   // print the node
   cout<<endl;
   cout<<"The node is start from: "<<start<<endl;
   ptr = start;
   while (ptr!=0)
   {
       cout<<"info: "<<info[ptr]<<" ";
       cout<<" Next node: "<<link[ptr]<<endl;
       ptr = link[ptr];
   }

   // print available node
   cout<<endl;
   cout<<"The available memory start from: "<<avail<<endl;
   ptr = avail;
   while (ptr!=0)
   {
       cout<<"The available node is: "<<link[ptr]<<endl;
       ptr = link[ptr];
   }
   
   
 // Take input the item to insert
//    cout<<endl;
//    cout<<"Enter the item to insert: ";
//    cin>>item;
//    cout<<"The node is start from: "<<start<<endl;
//    ptr = start;

   
   
}