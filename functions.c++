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

int main()
{

    //
    cout << "Addtion of 4 and 5 is :" << add(4, 5) << endl;
    cout << "\nNumbers multiplied : " << multiplication(2, 4, 5) << endl;

    return 0;
}