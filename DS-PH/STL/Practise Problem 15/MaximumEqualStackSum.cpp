#include <bits/stdc++.h>
using namespace std;

int main() {
    // Use a vector to initialize the stack
    vector<int> v1 = {2,2,4,6};
    vector<int> v2 = {14,6,8,1};
    vector<int> v3 = {3,2,1,2};
    
    // Create a stack using the vector as the underlying container
    stack<int, vector<int>> s1(v1);
    stack<int, vector<int>> s2(v2);
    stack<int, vector<int>> s3(v3);
    
    int sum1 = 0;
    while (!s1.empty())
    {
        int k = s1.top();
        s1.pop();

        sum1+=k;
    }
    
    int sum2 = 0;
    while (!s2.empty())
    {
        int k = s2.top();
        s2.pop();

        sum2+=k;
    }
    
    int sum3 = 0;
    while (!s3.empty())
    {
        int k = s3.top();
        s3.pop();

        sum3+=k;
    }

    if(sum1 == sum2 && sum2 == sum3)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not same"<<endl;
    }

    return 0;
}
