#include <iostream>
#include <vector>
#include <bits/stdc++.h> //for using the function sort()

using namespace std;

int main()
{
    vector<int> a;

    // initialize the vector with values 1 to 5

    for (int i = 1; i < 5; i++)
    {
        a.push_back(i);
    }

    // iterate through the vector and print the values
    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i;
    }

    cout << endl
         << endl;

    // using cbegin and cend, iterate through the vector and print the values
    cout << "cbegin and cend iteration technique\n";
    for (auto i = a.cbegin(); i != a.cend(); i++)
    {
        cout << *i;
    }

    cout << endl
         << endl;

    cout << "\nOutput of rbegin and rend Function: ";
    for (auto ir = a.rbegin(); ir != a.rend(); ++ir)
        cout << *ir << " ";

    cout << endl
         << endl;

    //  using capacity
    cout << "\n\tCapacity of the vector\n--------------------------\n\n";

    vector<int> b;
    for (int i = 1; i < 5; i++)
    {
        b.push_back(i);
    }

    cout << "Size of vector b:: " << b.size() << endl;
    cout << "Capacity of vector b ::" << b.capacity() << endl;
    cout << "Max size of vector b is " << b.max_size() << endl;

    b.pop_back();

    b.resize(6);
    cout << "Size of vector b:: " << b.size() << endl;

    b.erase(b.begin());
    cout << "Size of vector b:: " << b.size() << endl;

    for (auto i = b.begin(); i != b.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl
         << endl;

    cout << b.at(4) << endl;
    cout << b.front() << endl;
    return 0;
}