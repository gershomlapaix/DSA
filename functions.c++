/*
  Demonstrating inline functions and Default parameters in functions
*/

#include <iostream>

using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}

int multiplication(int a, int b, int c = 5, int d = 5)
{
    return a * b * c * d;
}

// call by value
void passByValue(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

// call by reference
void passByReference(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{

    //
    cout << "Addtion of 4 and 5 is :" << add(4, 5) << endl;
    cout << "\nNumbers multiplied : " << multiplication(2, 4, 5) << endl;
    cout << "\n -------------------------\n";

    int a = 7, b = 9;
    cout << "\tBefore swapping a = " << a << " and b = " << b << endl;

    passByValue(a, b);
    cout << "\n\tAfter swapping a = " << a << " and b = " << b << endl;

    cout << "\n -------------------------\n";
    cout << "Pass by reference\n";

    cout << "\tBefore swapping a = " << a << " and b = " << b << endl;

    passByReference(a, b);
    cout << "\n\tAfter swapping a = " << a << " and b = " << b << endl;
    return 0;
}