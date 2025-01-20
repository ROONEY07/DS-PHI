#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
    // constructor
    student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

// custom compare class
class cmp
{
     public:
     bool operator()(student a, student b)
     {
          if(a.marks < b.marks) return true;
          else if(a.marks > b.marks) return false;
          else 
             if(a.roll > b.roll) return true;
             else return false;
     }
};
int main()
{
      int n;
      cout<<"Enter the size of ob: ";
      cin>>n;
      
      // declare priority queue
      priority_queue<student, vector<student>,cmp> pq;
      for (int i = 0; i < n; i++)
      {
           string name;
           int roll,marks;
           cin>>name>>roll>>marks;
           // create an object and pass that value
           student ob(name,roll,marks);
           pq.push(ob);
      }
      
      cout<<endl;
      // print the priority queue
      while (!pq.empty())
      {
          cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
          pq.pop();
      }
      
      
}