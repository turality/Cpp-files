#include "course.h"
#include <iostream>

using namespace std;
void Course::print() const
{
    cout << "code: " << code << endl;
    cout << "name: " << name << endl;
}
Course::Course(int c, string s)
{
    code = c;
    name = s;
}