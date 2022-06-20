#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
       int num = 121;
    string reversed = "";
    int flag = 0;

    //  first way
    string numString = to_string(num);

    for (int i = numString.length(); i >= 0; i--)
    {
        reversed += numString[i];
    }
    cout << endl;

    for (int i = 0; i <= numString.length(); i++)
    {
        if (reversed[i] == numString[i])
        {
            cout << "good" << endl;
        }
        else
        {
            cout << "bad" << endl;
        }
    }

    cout << endl;


    */

    // second way

    int numToCheck, sum = 0;
    cout << "Enter a number to check : ";
    cin >> numToCheck;

    int temp = numToCheck;

    while (temp > 0)
    {
        int rem = temp % 10;
        sum = (sum * 10) + rem;
        temp = temp / 10;
    }

    if (sum == numToCheck)
    {
        cout << numToCheck << " is a palindrome\n";
    }
    else
    {
        cout << numToCheck << " is a not palindrome\n";
    }

    return 0;
}