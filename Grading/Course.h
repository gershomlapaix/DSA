#ifndef H_Course
#define H_Course
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Course
{
    
private:
    string courseName;
    string courseNumber;
    char courseGrade;
    int courseDetails; // store course credit hours here

public:
    Course();
    void setCourseInfor(string name, string number, char grade, int details);
    void setCourseName(string name);
    void setCourseNumber(string number);
    void setCourseGrade(char grade);
    void setCourseDetails(int details);
    string getCourseName();
    string getCourseNumber();
    char getCourseGrade();
    int getCourseDetails();
    void print(ostream &outp, bool isGrade);

    bool operator==(Course &c);
    bool operator!=(Course &c);
    bool operator<(Course &c);
    bool operator>(Course &c);
    bool operator<=(Course &c);
    bool operator>=(Course &c);
};

// definitins
Course::Course()
{
    courseName = "";
    courseNumber = "";
    courseGrade = '*';
    courseDetails = 0;
}

void Course::setCourseInfor(string name, string number, char grade, int details)
{
    courseName = name;
    courseNumber = number;
    courseGrade = grade;
    courseDetails = details;
}

void Course::print(ostream &outp, bool isGrade)
{
    outp << left;
    outp << setw(8) << courseNumber << " ";
    outp << setw(20) << courseName << " ";
    outp.unsetf(ios::left);
    outp << setw(20) << courseDetails << " ";

    if (isGrade)
    {
        outp << setw(4) << courseGrade << " ";
    }
    else
    {
        outp << setw(4) << " ***";
    }
}

// setters
void Course::setCourseName(string name)
{
    courseName = name;
}

void Course::setCourseDetails(int details)
{
    courseDetails = details;
}

void Course::setCourseNumber(string number)
{
    courseNumber = number;
}

void Course::setCourseGrade(char grade)
{
    courseGrade = grade;
}

// getters
string Course::getCourseName()
{
    return courseName;
}

string Course::getCourseNumber()
{
    return courseNumber;
}

char Course::getCourseGrade()
{
    return courseGrade;
}

int Course::getCourseDetails()
{
    return courseDetails;
}


// define operators
bool Course::operator==(Course &c){
    return (courseNumber == c.courseNumber);
}
bool Course::operator!=(Course &c){
    return (courseNumber != c.courseNumber);
}
bool Course::operator<(Course &c){
    return (courseNumber < c.courseNumber);
}
bool Course::operator>(Course &c){
    return (courseNumber > c.courseNumber);
}
bool Course::operator<=(Course &c){
    return (courseNumber <= c.courseNumber);
}
bool Course::operator>=(Course &c){
    return (courseNumber >= c.courseNumber);
}
#endif