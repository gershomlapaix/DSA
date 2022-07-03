#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> intList;

    intList.push_back(13);
    intList.push_back(42);
    intList.push_back(62);
    intList.push_back(834);

    cout << "Fecht 1 : Elements :: ";
    for (int i = 0; i < 4; i++)
    {
        cout << intList[i] << " ";
    }

    cout << endl;
    cout << endl;

    // using iterator
    vector<int>::iterator listIt;
    cout << "Fecht 2 : Elements :: ";
    for (listIt = intList.begin(); listIt != intList.end(); ++listIt)
    {
        cout << *listIt << " ";
    }

    cout << endl;
    cout << endl;

    listIt = intList.begin();
    ++listIt;
    ++listIt;
    intList.insert(listIt, 88);

    cout << "Fecht 3 : Elements :: ";
    for (listIt = intList.begin(); listIt != intList.end(); ++listIt)
    {
        cout << *listIt << " ";
    }

    cout << endl;
    cout << endl;

    return 0;
}
