#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int test;
    cin>>test;
    cin.ignore();
    for (int i = 1; i <=test; i++)
    {
            string sentence;
            getline(cin, sentence);  
            string word;
            stringstream ss(sentence);

            map<string, int> mp;  
            string firstMaxWord = "";  
            int maxFrequency = 0;      
            
            while (ss >> word) 
            {
                mp[word]++;

                // Update max frequency and track the first word that reaches it
                if (mp[word] > maxFrequency) 
                {
                    maxFrequency = mp[word];
                    firstMaxWord = word;
                }
            }

            // Output the first word that reaches maximum frequency
            cout<< firstMaxWord << " " <<maxFrequency<< endl;
    }
    

    return 0;
}
