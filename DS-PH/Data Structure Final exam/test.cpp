#include <bits/stdc++.h>
using namespace std;
// to optimised the time complexity we use negative int approach
int main() 
{
    int n;
    cin >> n;

    // Priority queue (min-heap)
    priority_queue<pair<string, int>, vector<pair<string, int>>, greater<>> pq;

    // Input and push into the priority queue
    for (int i = 0; i < n; i++) 
    {
        string s;
        int num;
        cin >> s >> num;
        pq.push({s, -num}); // Push string and negated integer
    }

    // Process the priority queue and print the sorted pairs
    while (!pq.empty()) 
    {
        cout << pq.top().first << " " << -pq.top().second << endl; 
        pq.pop();
    }

    return 0;
}
