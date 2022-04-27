#include <iostream>
#include"student.h"
#include"date.h"

#include"course.h"
using namespace std;
Student::Student(string n, int g, Date dIn, Course cIn)
{
    name = n;
    grade = g;
    examDate = dIn;
    courseExam = cIn;
}
void Student::printStudent()const
{
    cout << "name: " << name << endl;
    cout << "grade: " << grade << endl;
    cout << "exam date: ";
    examDate.printDate();
    cout << "course info:";
    courseExam.print();
}