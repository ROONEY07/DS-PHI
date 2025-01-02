#include<bits/stdc++.h>
using namespace std;
int main()
{
   // declare list
   list<string>linkedlist;
   // take input the list
   string val;
   cout<<"Enter the val: ";
   while (cin>>val && val!="end")
   {
       linkedlist.push_back(val);
   }

   int Q;
   cout<<"Enter the Quries: ";
   cin>>Q;
   // ignore the whitespace
   cin.ignore();
   
   // then store the current position of list , so that we can travers it easily
   auto tmp = linkedlist.begin();


   while (Q--)
   {
        string command;
        getline(cin,command);

        stringstream ss(command);
        string action, searchVal;
        ss>>action;

        if(action == "next")
        {
             if (next(tmp)!=linkedlist.end()) // tmp!=linkedlist.begin()
             {
                 tmp++;
                 cout<<*tmp<<endl;
             }
             else
             {
                cout<<"Not Available"<<endl;
             }
             
             
        }
        else if (action == "prev")
        {
             if (next(tmp)!=linkedlist.begin())
             {
                tmp--;
                cout<<*tmp<<endl;
             }
             else
             {
                cout<<"Not Available"<<endl;
             }
             
             
        }
        else
        {
            
        }
        
   }
   
      
}