#include<bits/stdc++.h>
using namespace std;

// create clas
class myStack
{
    public:
    vector<int> v;

    // push value
    void push(int val)
    {
        v.push_back(val);
    }

    // pop value
    void pop()
    {
        v.pop_back();
    }

    // as the stack does not support index, it only provides to access the top element. for that to accessing the element
    int top()
    {
        return v.back();
    }

    // int size
    int size()
    {
        return v.size();
    }

    // check the stack is empty or not
    bool empty()
    {
        if(v.size()==0) return true; 
        else return false;
    }
};
int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
}