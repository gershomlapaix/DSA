#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h> //for using the function sort()

using namespace std;

int main()
{

    // Sorting an array
    cout << "\n\tSorting a vector\n--------------------------\n\n";

    vector<string> names{"John", "Jane", "Mary", "Bob", "Tom"};

    cout << "\nBefore sorting : ";
    for (auto i = names.begin(); i != names.end(); i++)
    {
        cout << *i << " ";
    }

    cout << "\nAfter sorting : ";
    sort(names.begin(), names.end());

    for (auto name : names)
    {
        cout << name << " ";
    }

    cout << endl
         << endl;

    cout << "\nDescendign order\n--------------------------\n\n"; // there's third parameter to sort method
    sort(names.begin(), names.end(), greater<string>());

    cout << "Elements:: ";
    for (auto name : names)
    {
        cout << name << " ";
    }

    cout << endl
         << endl;
    return 0;
}