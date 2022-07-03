#ifndef H_Person
#define H_Person
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Person
{
private:
    string firstName;
    string lastName;

public:
    Person();
    void print();

    void setName(string fname, string lname)
    {
        firstName = fname;
        lastName = lname;
    }

    Person &setFirstName(string lname);
    Person &setLastName(string fname);

    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    Person(string fname = "", string lname = "");
};

Person::Person()
{
    firstName = "";
    lastName = "";
}

Person& Person::setFirstName(string fname)
{
    firstName = fname;
    return *this;
}

Person& Person::setLastName(string lname){
    lastName = lname;
    return *this;
}

#endif