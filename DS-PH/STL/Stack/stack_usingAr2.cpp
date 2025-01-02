#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int> v;

    // push the value
    void push(int val)
    {
        v.push_back(val);
    }

    // pop the value
    void pop()
    {
        v.pop_back();
    }

    // as the stack does not support index,so to accessing the value create top
    // as it only provides top value
    int top()
    {
        return v.back();
    }


    // size of stack
    int size()
    {
        return v.size();
    }

    // check the stack empty or not
    bool empty()
    {
        if(v.size()==0) return true;
        else return false;
    }
};
int main()
{
    // create a stack variable or object
    myStack st;
                                                                                                                                                                                                      
    int n;
    cout<<"Enter the size of stack: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    
    // print the stack
    while (!st.empty()) // stack empty na howa porjontto top er value daw
    {
        cout<<st.top()<<" "; // print the top value
        st.pop(); // remove the top value, otherwise we can not access the next top value, because it only provides the top value acess
    }
    
    
    
}