#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fio;
    string line;

    fio.open("example2.txt", ios::trunc | ios::out | ios::in);
    while (fio)
    {
        getline(cin, line);

        if (line == "-1")
            break;

        fio << line << endl;
    }

    // point read pointer at the beginnign of the file
    fio.seekg(0, ios::beg);

    while (fio)
    {
        getline(fio, line); // read a line from the file

        cout << line << endl;
    }

    fio.close();

    return 0;
}