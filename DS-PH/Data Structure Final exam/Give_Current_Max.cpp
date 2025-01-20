#include <bits/stdc++.h>
using namespace std;
// Define the Student class
class student 
{
    public:
    string name;
    int roll;
    int marks;

    // Constructor
    student(string name, int roll, int marks) 
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

// create compare class
class compare 
{
    public:
    bool operator()(student a, student b) 
    {
        // Higher marks have higher priority
        if (a.marks == b.marks) 
        {
            return a.roll > b.roll; // If marks are the same, smaller roll number has higher priority
        }
        return a.marks < b.marks; // Otherwise, higher marks have higher priority
    }
};

int main() 
{
    int n;
    cin >> n;

    // Declare the priority queue
    priority_queue<student, vector<student>, compare> pq;

    // Take input for students
    for (int i = 0; i < n; i++) 
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student ob(name, roll, marks);
        pq.push(ob);
    }

    // Queries
    int queries;
    // cout << "Enter the number of queries: ";
    cin >> queries;

    while (queries--) 
    {
        int command;
        // cout<<"\n0.push"<<endl;
        // cout<<"1.print"<<endl;
        // cout<<"2.delete"<<endl;
        cin >> command;

        if (command == 0) 
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            student x(name, roll, marks);
            pq.push(x);

            if (pq.empty()) 
            {
                cout << "Empty" << endl;
            } else 
            {
                cout << pq.top().name <<" "<< pq.top().roll <<" "<< pq.top().marks << endl;
            }

        } 
        else if (command == 1) 
        {
            if (pq.empty()) 
            {
                cout << "Empty" << endl;
            } else 
            {
                cout << pq.top().name <<" "<< pq.top().roll <<" "<< pq.top().marks << endl;
            }

        } 
        else if (command == 2) 
        {
            if (pq.empty()) 
            {
                cout << "Empty" << endl;
            } 
            else 
            {
                pq.pop();

                if (pq.empty()) 
                {
                    cout << "Empty" << endl;
                } 
                else 
                {
                    cout << pq.top().name <<" "<< pq.top().roll <<" "<< pq.top().marks << endl;
                }
            }

        } 
        else 
        {
            break;
        }
    }

    return 0;
}
