#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact *= i;
    }

    cout << "Factorial is of " << num <<" is " << fact;

    cout << endl;

    return 0;
}