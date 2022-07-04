#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include<iterator>
#include "Student.h"
#include "Course.h"

using namespace std;

void getStudentData(ifstream& infile, vector<Student> &studentList);

int main(){

    vector<Student> studentList;

    double tuitionRate;

    ifstream infile;
    ofstream outfile;

    infile.open("student-data.txt");

    if(!infile){
        cout<<"Input file doesn't exist.\n";
        return 1;     // terminate the program immediately
    }

    outfile.open("stDataOut.txt");

    infile>> tuitionRate;

    getStudentData(infile, studentList);
    // printGrade

    return 0;
}

void getStudentData(ifstream &infile, vector<Student> &studentList)
{
    string fname;
    string lname;
    int ID;
    int noOfCourses;
    char isPaid;

    bool isTuitionPaid;

    string cName;
    string cNo;
    int credits;
    char grade;

    vector<Course> courses;

    Course courseTemp;
    Student stdTemp;

    infile >> fname;

    while (infile)
    {
        infile >> lname >> ID >> isPaid;

        if (isPaid == 'Y')
        {
            isTuitionPaid = false;
        }
        else
        {
            isTuitionPaid = false;
        }

        infile >> noOfCourses;

        courses.clear();

        for (int i = 0; i < noOfCourses; i++)
        {
            infile >> cName >> cNo >> credits >> grade;
            courseTemp.setCourseInfor(cName, cNo, grade,credits);
            courses.push_back(courseTemp);
        }

        stdTemp.setInfo(fname, lname, ID, isTuitionPaid, courses);
        studentList.push_back(stdTemp);

        infile>>fname;
    }
}