#include<bits/stdc++.h>
using namespace std;
int main()
{
   /*
        SRCHSL(INFO, LINK, START, ITEM, LOC)
        LIST is a sorted list in memory. This algorithm finds the location LOC of the
        node where ITEM first appears in LIST, or Sets LOC = NULL.
        1. Set PTR : =START.
        2. Repeat Step 3 while PTR 0 NULL;'
        3. If ITEM < INFO[PTR], then;
        Set PTR := LINKEPTRJ. [PTR now points to next node.]
        Else if ITEM = INFO[PTR], then:
        Set LOC := PTR, and Exit. [Search is successful.]
        Else:
        Set LOC;= NULL, and Exit. [ITEM now exceeds INFO[PTR].]
        [End of If structure.]
        [End of Step 2 loop.]
        4. Set LOC;= NULL.
        5. Exit.
   */   
    
     int n;
     cout<<"Enter the size of linked list: ";
     cin>>n;
     int ptr, start, link[n]; // link for shift to next node
     char info[n], item;

     // start the linked list
     cout<<"Start the linked list: ";
     cin>>start;

     // now store the start into ptr to go to the each node
     ptr = start;

     // Now take input the linked list
     while (ptr!=0)
     {
        cout<<"input info: ";
        cin>>info[ptr];
        cout<<"Enter next node: ";
        cin>>link[ptr];

        // Update the ptr
        ptr = link[ptr];
     }

    
    // To search the item take input the item
    cout<<endl;
    cout<<"Enter the item: ";
    cin>>item;
    cout<<"Node is start from: "<<start<<endl;
    ptr = start;
    bool found = false;
    while (ptr!=0)
    {
        if (item < info[ptr])
        {
            ptr = link[ptr];
        }
        else if (item==info[ptr])
        {
            cout<<"The "<<item<<" is found in the linked list"<<endl;
            cout<<"The location of the item is: "<<ptr<<endl;
            found = true;
            break;
        }
        else
        {
            ptr = 0;
            break;
        }
       
        
    }
    
    if (found==0)
    {
       cout<<"The "<<item<<" is not found in the list list"<<endl;
    }
    
     
     
     
  
     
     
}