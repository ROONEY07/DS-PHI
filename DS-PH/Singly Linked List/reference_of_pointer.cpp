#include<bits/stdc++.h>
using namespace std;
int fun(int *&p)
{
    // p = NULL;
    // pointeer ar moddhe kono value set kora jaina
    // cout<<p<<endl;

    // ami jodi cai fun function er pointer ke NULL korle, main function er pointer o jeno NULL hoi, not 
    // value. tahole emversion(&) soho derefernce korte hobe
    cout<< &p<<endl;
}
int main()
{
    int val = 10;
    // derefernce kore val er address ke rakhsi
    int *ptr = &val;
    // akon ai pointer ta fun function er moddhe diya dibo
    fun(ptr);
    cout<<&ptr<<endl;


// aitar maddome refernce dhore rakha hoi. normally derefence korle value change hoi. but 
// pointer er address chagne hoi na. derefence korle se direct value er address ke point kore

// but & refence dhore rakhle se direct pointer er address ke point kore directly value er address
// er sathe related, so aikhaneo same hoi er sathe point er address hoi inlcude hoi
}