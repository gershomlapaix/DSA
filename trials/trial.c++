#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;


int main()
{
    fstream inputFile("trial.txt");

    if (!inputFile)
    {
        return -1;
    }

    string line, word;
    string buffer;

    string id = "231";

    while (getline(inputFile, line))
    {
            std::stringstream record(line);

        record >> word;
        if (word == id)
        {
            buffer += id + "\t";
            buffer += "newname.txt\t";

            record >> word;

            while (record >> word)
            {
                buffer += "\t" + word + "\t";
                buffer += "\n";
            }
        }
        else
        {
            buffer += line + "\n";
        }
    }

    inputFile.close();

    ofstream outputFile("trial.txt");

    outputFile << buffer;

    outputFile.close();

    return 0;
};