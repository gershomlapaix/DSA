#include <iostream>
#include <string>

using namespace std;

int sum(int num)
{
    if (num != 0)
    {
        return (num + sum(num - 1));
    }
    else
    {
        return num;
    }
}

int main()
{
    int n;
    cout << "\t\nEnter the number to get sum from 1 to that number: ";
    cin >> n;

    int total = sum(n);
    cout << "\n\t Sum of natural numbers is " << total << "\n";
}