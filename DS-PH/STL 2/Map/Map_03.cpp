#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<string, int> mp;
    //  mp.insert({"sakib al hasan",75});

    // but we can use it shortly

    mp["shakib al hasan"] = 75;
    mp["Cristiano Ronaldo"] = 7;
    mp["Tamim iqbal"] = 89;
    mp["Messhi"] = 10;

    cout<<mp["shakib al hasan"];   
}