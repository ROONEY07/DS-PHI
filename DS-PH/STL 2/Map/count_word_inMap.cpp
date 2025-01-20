#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    // while (ss >> word)
    // {
    //     cout<<word<<endl;
    // }

    while (ss >> word)
    {
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
         cout<<it->first<<" "<<it->second<<endl;
    }
    
    
    // i can see a single word that how many times it comes
    cout<<endl<<endl;
    cout<<mp["i"]<<endl;
       
}