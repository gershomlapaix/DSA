#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, num1 = 0, num2 = 1;
    cout << "Enter the number : ";
    cin >> num;

    int i = 0;
    while (i < num)
    {
        cout << num1 << " ";
        int nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;

        i++;
    }

    cout << endl;

    return 0;
}