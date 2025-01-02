#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 20, 30, 20, 40, 10};

    bool hasDuplicate = false;

    // Iterate through the list
    for (auto it = mylist.begin(); it != mylist.end(); ++it)
    {
        // Find if the current element appears again in the list
        auto duplicateIt = find(next(it), mylist.end(), *it);
        if (duplicateIt != mylist.end())
        {
            cout << "Duplicate found: " << *it << endl;
            hasDuplicate = true;
            break; // Exit if you only want to check existence
        }
    }

    if (!hasDuplicate)
        cout << "No duplicates found in the list." << endl;

    return 0;
}
