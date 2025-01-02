#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    queue<int> q; 

    // Populate the queue using the vector
    for (int val : v) {
        q.push(val);
    }

    stack<int> Q2;
    while (!q.empty()) 
    {
       int k = q.front();
       q.pop();

       Q2.push(k);
    }

    while (!Q2.empty()) 
    {
       q.push(Q2.top());
       Q2.pop();
    }

    // Print the queue Q2
    while (!q.empty()) {
        cout << q.front() << endl; 
        q.pop();                  
    }

    return 0;
}
