#include <iostream>
#include "course.h"
#include "date.h"
#include "student.h"
#include "student.cpp"
using namespace std;
int main()
{   
    Date T(25,2,2021);
    Course C(112,"Physics");
    Student S1("Tural",92,T,C);
    cout << "info of the first student:" << endl;
    S1.printStudent();
    Student S2;
    cout << "info of the second student:" << endl;
    S2.printStudent();

}