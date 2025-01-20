#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
        Algorithm - 5.2

        SEARCH(INFO, LINK, START, ITEM, LOC)
        LIST is a linked list in memory. This algorithm finds the location LOC of the node
        where ITEM first appears in LIST, or Sets LOC = NULL.
        1. Set PTR:START.
        2. Repeat Step 3 while PTR NULL:
        3. If ITEM =INFO[PTR], then:
        Set LOC:=PTR, and Exit.
        Else:Set PTR:=LINK[PTR]. [PTR now points to the next node.I
        [End of If structure.]
        [End of Step 2 loop.]
        4. [Search is unsuccessful.] Set LOC: NULL.
        5. Exit.
    */   

   int ptr, start, link[10], loc;
   char info[10], item;

   // start the node
   cout<<"Start the node: ";
   cin>>start;
   ptr = start;

   // Take input the Node
   while (ptr!=0)
   {
       cout<<"Input the node: ";
       cin>>info[ptr];
       cout<<"Next node index: ";
       cin>>link[ptr];

       ptr = link[ptr];
   } 


   // To search the item , take input the item
   cout<<endl;
   cout<<"Enter the item: ";
   cin>>item;
   ptr = start;
   while (ptr!=0)
   {
       if (item==info[ptr])
       {
           loc = ptr;
           cout<<"The "<<item<<" is found in the node"<<endl;
           cout<<"The location of the item is: "<<ptr<<endl;
           break;
       }
       else
       {
           ptr = link[ptr];
       }
       
       
   }

   if (loc==0)
   {
      cout<<"The "<<item<<" is not found in the node"<<endl;
   }
   
   
   
}