#ifndef STUDENT_H
#define STUDENT_H
#include "date.h"
#include "date.cpp"
#include "course.h"
#include"course.cpp"
class Student
{
    string name;
    Course courseExam;
    Date examDate;
    int grade;
    public:
        Student()
        {
            name = "None";
            grade = 0;
        };
        Student(string n, int g, Date dIn, Course cIn);
        void printStudent()const;
};
#endif