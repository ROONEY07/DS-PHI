#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
            list<type>myList;             Construct a list with 0 elements.                                      O(1)
            list<type>myList(N);          Construct a list with N elements and the value will be garbage.        O(N)
            list<type>myList(N,V);        Construct a list with N elements and the value will be V.              O(N)
            list<type>myList(list2);      Construct a list by copying another list list2.                        O(N)
            list<type>myList(A,A+N);      Construct a list by copying all elements from an array A of size N.    O(N)


    */   

   
   // declare list method 1
   list<int> mylist;   // kisu nai

   // declare list method 2
   list<int> mylist2(5);    // 0 0 0 0 0

   // declare list method 3
   list<int> mylist3(5,10); //  list<type>myList(size,Value) // 10 10 10 10 10

   // declare list method 4
   
   int n;
   cout<<"Enter the size of list: ";
   cin>>n;

   list<int> mylist4(n);

   // print the list
   cout<<"List value is: ";
   for(int val:mylist3)
   {
      cout<<val<<" ";
   }
}