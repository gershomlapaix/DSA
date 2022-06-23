#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;
    double salary;
};

int main()
{
    Person p1;

    cout << "Enter the person details :: \n";

    Person *ptr = &p1;
    cout << "Name : ";
    cin >> ptr->name;

    cout << "Age : ";
    cin >> ptr->age;

    cout << "Salary : ";
    cin >> ptr->salary;

    cout << "\t\nThe entered details are :\n";
    cout << "\t\t\nName is " << ptr->name << endl;
    cout << "\t\tAge is " << ptr->age << endl;
    cout << "\t\tSalary is " << ptr->salary << endl;
    return 0;
}