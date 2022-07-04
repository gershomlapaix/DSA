#include <iostream>
#include <vector>
#include <bits/stdc++.h> //for using the function sort()
#include <fstream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string address;

public:
    Person();
    Person(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }

    // getters and setters
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    string getAddress()
    {
        return address;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
};

int main()
{

    // vector<string> names{"John", "Jane", "Mary", "Bob", "Tom"};

    // Person person;
    ofstream outputFile("people.txt");

    vector<Person> people;

    people.push_back(Person("John", 20, "Bangalore"));
    people.push_back(Person("Jane", 40, "test"));
    people.push_back(Person("Mary", 23, "kolkata"));
    people.push_back(Person("Tom", 23, "ooty"));

    for (auto person : people)
    {
        person.print();
        outputFile << person.getName() << " " << person.getAge() << " " << person.getAddress() << endl;
    }

    // ostream_iterator<Person> outputIterator(outputFile, "\n");

    // sort(people.begin(), people.end()); // keep the data sorted

    // copy(people.begin(), people.end(), outputIterator);
    return 0;
}