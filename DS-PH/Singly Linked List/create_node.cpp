#include<bits/stdc++.h>
using namespace std;
/*
    Singly link list, jekhane object gulo node akare thake, node er duita part theke. 
    1. value
    2. next node er address/pointer

    so node gulo singly linked list te, ak mukhi hoi. that means, ami (a theke b ke access) korte parbo but
    b theke a ke access korte parbo na.

    // arekta bisoy hocche, node jahatu duita bisoy niya kaj kore. akta hocche
    1. value or data
    2. next node er address .that means (pointer)

    so duita , dui dhoroner data type. So amn kono build-in datatype nai, jekhane amora aksathe
    ai dui dhoroner data niya kaj korte parbo. jahatu nai, tai amader datatype built kora lagbe. 
    Thats means, amader user-define datatypes use kora lagbe. jeita hote pare (CLASS)



(Linked List can be defined as collection of objects called nodes that are randomly stored in the memory.
A node contains two fields i.e. data stored at that particular address and the pointer 
which contains the address of the next node in the memory.
The last node of the list contains pointer to the null.)



# Uses of Linked List

The list is not required to be contiguously present in the memory. 
The node can reside any where in the memory and linked together to make a list. 
This achieves optimized utilization of space.
list size is limited to the memory size and doesn't need to be declared in advance.
Empty node can not be present in the linked list.
We can store values of primitive types or objects in the singly linked list.




Why use linked list over array?
Till now, we were using array data structure to organize the group of elements that are to be stored 
individually in the memory. However, Array has several advantages and disadvantages which must be known 
in order to decide the data structure which will be used throughout the program.

Array contains following limitations:

The size of array must be known in advance before using it in the program.
Increasing size of the array is a time taking process. It is almost impossible to expand 
the size of the array at run time.
All the elements in the array need to be contiguously stored in the memory. 
Inserting any element in the array needs shifting of all its predecessors.
Linked list is the data structure which can overcome all the limitations of an array. 
Using linked list is useful because,

It allocates the memory dynamically. All the nodes of linked list are non-contiguously stored 
in the memory and linked together with the help of pointers.
Sizing is no longer a problem since we do not need to define its size at the time of declaration. 
List grows as per the program's demand and limited to the available memory space.
*/
int main()
{
    
}