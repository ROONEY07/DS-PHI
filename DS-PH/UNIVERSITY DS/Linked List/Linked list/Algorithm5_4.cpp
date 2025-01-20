#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
      NSFIRST(INFO, LINK, START, AVAIL, ITEM)
        This algorithm inserts ITEM as the first node in the list.
        I. [OVERFLOW?] If AVAIL = NULL, then: Write: OVERFLOW, and Exit.
        2. [Remove first node from AVAIL list.]
        Set NEW:= AVAIL and AVA1L:'LINK(AVAILj.
        3. Set INFO[NEWI := ITEM. [Copies new data into new node.]
        4. Set LINK[NEW] := START. [New node now points to original first node.]
        5. Set START:= NEW. [Changes START so it points to the new nodc]
        6. Exit. 
    */   

   int n;
   cout<<"Enter the size of linked list: ";
   cin>>n;

   int ptr, start , link[n], avail, NEW; // here link is for go to the next node
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


   
   
   
 // Take input the item to insert
   cout<<endl;
   cout<<"Enter the item to insert: ";
   cin>>item;

   cout<<"The node is start from: "<<start<<endl;
   ptr = start;
   
   if (avail==0)
   {
     cout<<"The node is OVERFLOW"<<endl;
   }
   else
   {
       NEW = avail;
       avail = link[avail];
       info[NEW] = item;
       link[NEW] = start;
       start = NEW;
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
   
   
}