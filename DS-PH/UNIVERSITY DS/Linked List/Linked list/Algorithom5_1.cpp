#include<bits/stdc++.h>
using namespace std;
int main()
{
     /*
            (Traversing a Linked List) Let LIST be a linked list in memory. This algorithm
            traverses LIST, applying an operation PROCESS to each element of LIST. The
            variable PTR points-to the node currently being processed.
            1. Set PTR := START. [Initializes pointer PTR.J
            2. Repeat Steps 3 and 4 while PTR 0 NULL.
            3. Apply PROCESS to !NF0LPTRI..
            4. Set PTR:=LINK[PTRJ. (PFR now points to the next node.]
            [End of Step 2 loop.]
            5. Exit. 
     */ 
 
       int ptr, start, link[10];
       char info[10];

       // start the node
       cout<<"start the node: ";
       cin>>start;

       ptr = start; // amar indexing hobe ptr theke and ptr ke loop a pathabo tai start er value hobe ptr er value

       // Take input the array
       while (ptr!=0)
       {
            cout<<"Input info: ";
            cin>>info[ptr];
            cout<<"Next node index: ";
            cin>>link[ptr];

            // now update the ptr
            ptr = link[ptr];
       }


       // now print the node
       // ptr to akon null a tai ptr ke update korte hobe
       cout<<endl<<endl;
       cout<<"start: "<<start<<endl;
       ptr = start;
       while (ptr!=0)
       {
           cout<<"info: "<<info[ptr]<<" ";
           cout<<" Next Link: "<<link[ptr]<<endl;
           ptr = link[ptr];
       }
       
       

}