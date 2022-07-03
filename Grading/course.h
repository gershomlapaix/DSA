#ifndef H_Course
#define H_Course
#include <iostream>
#include <string>

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
    Course(string name = "", string number="", char grade='*', int details=0);
    void setCourseName(string name);
    void setCourseNumber(string number);
    void setCourseGrade(char grade);
    void setCourseDetails(int details);
    string getCourseName();
    string getCourseNumber();
    char getCourseGrade();
    int getCourseDetails();
    void print(ostream& outp, bool isGrade);


    bool operator==(Course& c);
    bool operator!=(Course& c);
    bool operator<(Course& c);
    bool operator>(Course& c);
    bool operator<=(Course& c);
    bool operator>=(Course& c);


};

#endif