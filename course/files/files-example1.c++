#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char arr[100];
    cout << "Enter your name and age:";
    cin.getline(arr, 100);

    int x;
    float y;
    ofstream myFile("xyz.txt", ios::app | ios::ate);
    myFile << arr;
    myFile.close();

    cout << "File operation performed successfully.\n";

    // reading from the file
    cout << "\n\tREADING FROM THE FILE.\n";
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.get(arr1, 100);
    cout << "The array content :: " << arr1 << endl;
    cout << "\n\t-------------------\n\tFile read operation done\n\t -----------------\n";
}