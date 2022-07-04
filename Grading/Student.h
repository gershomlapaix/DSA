#ifndef H_Student
#define H_Student
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include "Person.h"
#include "Course.h"

using namespace std;

class Student : public Person
{
private:
    int studentID;
    int numberOfCourses; // store the number of course
    bool isTuitionPaid;
    vector<Course> coursesEnrolled; // vector of courses enrolled

public:
    Student();
    void setInfo(string fname, string lname, int id, bool isPaid, vector<Course> courses);
    void print(ostream &outp, double tuitionRate);

    // declare getters and setters
    int getStudentID();
    int getNumberOfCourses();
    int getHoursEnrolled();
    bool getIsTuitionPaid();
    vector<Course> getCoursesEnrolled();

    void setStudentID(int id);
    void setNumberOfCourses(int num);
    void setIsTuitionPaid(bool isPaid);
    void setCoursesEnrolled(vector<Course> courses);

    double getGpa();
    double billingAmount(double tuitionRate);
};

// // definitions
Student::Student()
{
    studentID = 0;
    numberOfCourses = 0;
    isTuitionPaid = false;
    coursesEnrolled.clear();
}

void Student::setInfo(string fname, string lname, int id, bool isPaid, vector<Course> courses)
{
    setName(fname, lname);
    studentID = id;
    isTuitionPaid = isPaid;
    numberOfCourses = courses.size();
    coursesEnrolled = courses;

    // begin(): returns the position of the first element in the vector
    // end(): returns the position of the last element in the vector

    // sort(coursesEnrolled.begin(), coursesEnrolled.end());
}

int Student::getHoursEnrolled()
{
    int totalCredits = 0;

    for (int i = 0; i < numberOfCourses; i++)
        totalCredits += coursesEnrolled[i].getCourseDetails();
    return totalCredits;
}

double Student::billingAmount(double tuitionRate)
{
    return tuitionRate * getHoursEnrolled();
}

double Student::getGpa()
{
    double sum = 0.0;
    for (int i = 0; i < numberOfCourses; i++)
    {
        switch (coursesEnrolled[i].getCourseGrade())
        {
        case 'A':
            sum += coursesEnrolled[i].getCourseDetails() * 4;
            break;
        case 'B':
            sum += coursesEnrolled[i].getCourseDetails() * 3;
            break;
        case 'C':
            sum += coursesEnrolled[i].getCourseDetails() * 2;
            break;
        case 'D':
            sum += coursesEnrolled[i].getCourseDetails() * 1;
            break;
        case 'F':
            break;
        default:
            cout << "Invalid Course Grade" << endl;
        }
    }
    if (getHoursEnrolled() != 0)
        return sum / getHoursEnrolled();
    else
        return 0;
}

void Student::print(ostream &outp, double tuitionRate)
{
    outp << "Student names : " << Person::getFirstName() << " " << Person::getLastName() << endl;
    outp << "Student ID : " << studentID << endl;
    outp << "Number of courses enrolled : " << numberOfCourses << endl;

    outp << left;
    outp << "Course Number" << setw(15) << "Course Name" << setw(20) << "Credit Hours" << setw(20) << "Grade" << endl;
    outp.unsetf(ios::left);

    for (int i = 0; i < numberOfCourses; i++)
    {
        coursesEnrolled[i].print(outp, false);
    }

    cout << endl;

    outp << "Total number of credit hours : " << getHoursEnrolled() << endl;
    outp << fixed << showpoint << setprecision(2);

    if (isTuitionPaid)
    {
        outp << "Midsemester GPA : " << getGpa() << endl;
    }
    else
    {
        outp << "*** Grades are being held for not  paying tuition. ***" << endl;
        outp << "Amount Due: $" << billingAmount(tuitionRate) << endl;
    }

    outp << "*********************************************************" << endl
         << endl;
}

#endif