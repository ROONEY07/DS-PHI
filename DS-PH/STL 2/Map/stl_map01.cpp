#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    // aita jahatu key pair hisebe rakhe, taile caile pair hisebe value insert korte parbo
    mp.insert({"shakib al hasan",75});
    mp.insert({"Messhi",10});
    mp.insert({"Cristiano Rolando",7});
    mp.insert({"Tamim iqbal",66});
    

    // akon aita jahatu pair akare rakhsi, tai print er jonno iterator er maddhome korte hobe
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}