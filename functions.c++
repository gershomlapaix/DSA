/*
  Demonstrating inline functions
*/

#include <iostream>

using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}

int main()
{

    // 
    cout << "Addtion of 4 and 5 is :" << add(4, 5) << endl; 
    return 0;
}