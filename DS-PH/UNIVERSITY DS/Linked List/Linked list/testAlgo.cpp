#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
         Algorithm - 5.8
         DEL(info, link, start, avail, loc, locP)
         This algorithm Delete the node N with location loc. locP is the location of the node which precedes N

         step 1. if(locP = NULL) then:
                     set start = link[start]
                  Else: 
                       link[locP] = link[loc]
                  end of if
         step 2. set link[loc] = avail;
                 avail = loc
         step 3. Exit
         
    */   
     int ptr , start, link[10], avail, loc, locP;
     char info[10];

     // Take  input the linked list
     cout<<"Start the node: ";
     cin>>start;

     ptr = start;
     while (ptr!=0)
     {
        cout<<"Enter info: ";
        cin>>info[ptr];
        cout<<"Enter Next: ";
        cin>>link[ptr];
        ptr = link[ptr];
     }


     // Take input the available node
     cout<<endl;
     cout<<"Available Memory: ";
     cin>>avail;
     ptr = avail;
     while (ptr!=0)
     {
        cout<<"Next available: ";
        cin>>link[ptr];

        ptr = link[ptr];
     }
     
     cout<<endl;
     

    // print the linked list
     cout<<"linked start from: "<<start<<endl;
     ptr = start;
     while (ptr!=0)
     {
        cout<<"\ninfo: "<<info[ptr]<<" ";                                                        
        
        cout<<" Next node: "<<link[ptr]<<endl;
        ptr = link[ptr];
     }
     
     cout<<endl;


     // print the available node
     cout<<"Available is: "<<avail<<endl;
     ptr = avail;
     while (ptr!=0)
     {
        cout<<"Next available: "<<link[ptr]<<endl;
        ptr = link[ptr];
     }
     
    
    // Delete operation
    cout<<endl;
    cout<<"Enter the loc That Delete: ";
    cin>>loc;
    cout<<"Enter the previous loc of that item: ";
    cin>>locP;

    if (locP==0)
    {
       start = link[start];
    }
    else
    {
       link[locP] = link[loc];
    }

    link[loc] = avail;
    avail = loc;


    cout<<endl;
    // Now print the updated linked list
    cout<<"Updated node start: "<<start<<endl;
    ptr = start;
    while (ptr!=0)
    {
       cout<<"\ninfo: "<<info[ptr]<<" ";
       cout<<" Next node: "<<link[ptr]<<endl;
       ptr = link[ptr];
    }


    cout<<endl;
    // print the updated available node
    cout<<"Updated available Memory: "<<avail<<endl;
    ptr = avail;
    while (ptr!=0)
    {
        cout<<"Next updated avail: "<<link[ptr]<<endl;
        ptr = link[ptr];
    }
    
    
    
    


     
     
     
}