#include<iostream>
using namespace std;
int main(){
    int PTR, START, LINK[10],AVAILABLE;
    char INFO[10];

//Link list information
    cout<<"Start from : ";
    cin>> START;
    PTR = START;
    cout<<endl;

    while (PTR!= 0)
    {
        cout<< "Input Information : ";
        cin>> INFO[PTR];
        cout<< "Input the next node index : ";
        cin>> LINK[PTR];
        PTR = LINK[PTR]; 
    }

//Available information
    cout<<"Available  Memory : ";
    cin>> AVAILABLE;
    PTR=AVAILABLE;
    while (PTR!= 0)
    {
        cout<< "Input the next available node index : ";
        cin>> LINK[PTR];
        PTR = LINK[PTR]; 
    }


//Print the link list  
cout<<endl;
    PTR = START;
    cout<<endl;
    cout<<"Start : "<<START<< endl;
    while (PTR!=0)
    {
        cout<<"Information : "<< INFO[PTR]<<endl;
        cout<<"Next Link : "<< LINK[PTR]<< endl;
        PTR= LINK[PTR];
    }
    cout<<endl;

char ITEM;
int NEW,LOC;
cout<<"Input the Item  to be inserted : ";
cin>>ITEM;

cout<<"Input the location to insert : ";
cin>>LOC;

if (AVAILABLE==0)
{
    cout<<"Overflow";
}
NEW= AVAILABLE;
AVAILABLE= LINK[AVAILABLE];
INFO[NEW]=  ITEM;

if (LOC ==0)
{
    LINK[NEW]=START;
    START= NEW;
}
else{
    LINK[NEW]= LINK[LOC];
    LINK[LOC]= NEW;
}
//Print update output
cout<<endl;
    cout<<"Start : "<<START<< endl;
    PTR = START;
    while (PTR!=0)
    {
        cout<<"Updated Information : "<< INFO[PTR]<<endl;
        cout<<"Updated Next Link : "<< LINK[PTR]<< endl;
        PTR= LINK[PTR];
    }
    cout<<endl;

cout<<endl;
    cout<<"Available from after update  : "<<AVAILABLE<<endl;
    PTR=AVAILABLE;
    while (PTR!= 0)
    {
        cout<< "Next available node index : "<< LINK[PTR]<<endl;
        PTR = LINK[PTR]; 
    }
   
    return 0;
    
}