#include <iostream>
#include <vector>
#include <bits/stdc++.h> //for using the function sort()
#include <fstream>
#include <string>

using namespace std;

int main()
{

    vector<string> names{"John", "Jane", "Mary", "Bob", "Tom"};

    ofstream outputFile("names.txt");

    ostream_iterator<string> outputIterator(outputFile, "\n");

    sort(names.begin(), names.end());

    copy(names.begin(), names.end(), outputIterator);

    return 0;
}