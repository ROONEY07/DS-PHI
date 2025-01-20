#include<bits/stdc++.h>
using namespace std;
int main()
{
        
        //Declare an variable
        int ptr, start, link[10], avail;
        char info[10];

        cout<<"Start the node: ";
        cin>>start;
        ptr = start;

        // Take input the linked list
        while (ptr!=0)
        {
            cout<<"Enter info: ";
            cin>>info[ptr];
            cout<<"Next Node: ";
            cin>>link[ptr];

            ptr = link[ptr];
        }

        //Take input the available list
        cout<<endl;
        cout<<"Available Memory: ";
        cin>>avail;
        ptr = avail;

        while (ptr!=0)
        {
            cout<<"Input the available list: ";
            cin>>link[ptr];
            ptr = link[ptr];
        }

        // Print the link list
        cout << endl;
        ptr = start;
        cout << endl;
        cout << "Start : " << start << endl;
        while (ptr != 0)
        {
            cout << "Information : " << info[ptr] << endl;
            cout << "Next Link : " << link[ptr] << endl;
            ptr = link[ptr];
        }

        // Print  the available memory
        cout << endl;
        cout << "Available from  : " << avail << endl;
        ptr = avail;
        while (ptr != 0)
        {
            cout << "Next available node index : " << link[ptr] << endl;
            ptr = link[ptr];
        }
        
      // Deletion operation
      int loc, locP;
      cout<<endl;
      cout<<"Enter the location to delete: ";
      cin>>loc;
      cout<<"Enter the previous location: ";
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
      
      // print the linked list
    cout<<endl;
    cout<<"\nThe node is start from: "<<start<<endl;
    ptr = start;
    while (ptr!=0)
    {
        cout<<"\nUpdated Information: "<<info[ptr]<<" ";
        cout<<" Updated Next Link  "<<link[ptr]<<endl;
        ptr = link[ptr];
    }


    // print the available node
    cout<<endl;
    cout<<"Available from after update: "<<avail<<endl;
    ptr = avail;
    while (ptr!=0)
    {
        cout<<"Next available node index: "<<link[ptr]<<endl;
        ptr = link[ptr];
    }
     
}