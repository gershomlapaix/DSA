#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int rno, fee;
    char name[50];

    cout << "Enter the roll number : ";
    cin >> rno;

    cout << "Enter the name : ";
    cin >> name;

    cout << "Enter the fee : ";
    cin >> fee;

    ofstream fout("student.doc");
    fout << rno << "\t" << name << "\t" << fee;
    fout.close();

    ifstream fin("student.doc");
    fin >> rno >> name >> fee; // read data from the student doc file
    fin.close();

    cout << "\n\t The stored data are : ";
    cout << rno << "\t" << name << "\t" << fee;
    cout << endl;
    return 0;
}