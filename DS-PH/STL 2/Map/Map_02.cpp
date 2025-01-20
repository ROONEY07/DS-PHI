#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    // aita jahatu key pair hisebe rakhe, taile caile pair hisebe value insert korte parbo
    mp.insert({"shakib al hasan",75});
    mp.insert({"Messhi",10});
    mp.insert({"akib",0});
    mp.insert({"Cristiano Rolando",7});
    mp.insert({"Tamim iqbal",66});
    
    
    // key dhore tar index ke print korte parbo
    cout<<mp["Messhi"];

    // akon jodi kono key er value na thake tahole 0 dibe, but jodi key key er value ta 0 set kora thake tahole to 0 ei output dibe, tahole bujbo ki kore sei key ta ase kina
    // ai jonno map er count use korte pari
    if(mp.count("akib"))
    {
        cout<<"Ase"<<endl;
    }
    else
    {
        cout<<"Nai"<<endl;
    }
    
}