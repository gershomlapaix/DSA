#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream file;
    ofstream out;

    int code, amount;
    string str;

    file.open("trial.txt");
    out.open("output.txt");

    while (file >> code >> str >> amount)
    {
        cout << code << "\t" << str << "\t" << amount << endl;

        if (code == 231)
        {
            out << code << "\t"
                << "New name"
                << "\t" << amount << endl;
                break;
        }
        out << code << "\t"
            << str
            << "\t" << amount << endl;
    }

    file.close();
    out.close();
    return 0;
};