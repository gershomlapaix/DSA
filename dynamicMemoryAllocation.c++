#include <iostream>

using namespace std;

int main()
{
    int size;
    int *ptr;

    cout << "Enter a number of values: ";
    cin >> size;

    ptr = new int[size];

    cout << "Enter the values to store in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    cout << "The values in array : ";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << endl;

    return 0;
}