#include <iostream>
#include <string>

using namespace std;

struct Person
{
    char name[20];
    int age;
    double salary;
};

int main()
{
    Person p1;

    cout << "Person details\n";

    cout << "Enter person name : ";
    cin.getline(p1.name, 20);
    cout << endl;

    cout << "Enter age :";
    cin >> p1.age;
    cout << endl;

    cout << "Enter salary :";
    cin >> p1.salary;
    cout << endl;

    cout << "\tPerson details are : \n";
    cout << "\n\t\tPerson name : " << p1.name << endl;
    cout << "\n\t\tPerson age : " << p1.age << endl;
    cout << "\n\t\tPerson salary : " << p1.salary << endl;
    return 0;
}