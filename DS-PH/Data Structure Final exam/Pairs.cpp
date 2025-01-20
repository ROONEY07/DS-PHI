#include <bits/stdc++.h>
using namespace std;

class student 
{
    public:
    string S;
    long long int I;

    // Constructor
    student(string S, long long int I) 
    {
        this->S = S;
        this->I = I;
    }
};

// Custom comparator for sorting
bool cmp(student a, student b) 
{
    if (a.S == b.S) 
    {
        return a.I > b.I; 
    }
    return a.S < b.S; 
}

int main() 
{
    int n;
    cin >> n;

    vector<student> students;

    // Take input and add to vector
    for (int i = 0; i < n; i++) 
    {
        string s;
        long long int I;
        cin >> s >> I;
        students.emplace_back(s, I);
    }

    // Sort the vector
    sort(students.begin(), students.end(), cmp);

    // Print the sorted objects
    for (const auto &st : students) 
    {
        cout << st.S << " " << st.I << endl;
    }

    return 0;
}
