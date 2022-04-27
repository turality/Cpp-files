#ifndef COURSE_H
#define COURSE_H
#include <string>

using namespace std;
class Course
{
    int code; 
    string name;
    public:
        Course(int c, string n);
        Course()
        {
            code = 0;
            name = "None";
        };
        void print()const;

};
#endif