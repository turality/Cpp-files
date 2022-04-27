#include <iostream>
using namespace std;
class Teacher;
class Student{
    private:
        int id;
        string name;
        int gpa;
    public:
        Student()
        {
            id = 0;
            gpa = 0;
            name = "None";
        };
        Student(int i, string n,int g)
        {
            id = i;
            name = n;
            gpa = g;
        }
        friend class Teacher;
};

class Teacher{
    public:
        void printInfo(Student s)
        {
            cout << "Here is the student's data:" << endl;
            cout << "ID: " << s.id << endl;
            cout << "Name: " << s.name << endl;
            cout << "GPA: " << s.gpa << endl;
        };
        void change(Student s)
        {
            s.gpa = 21;
            s.id = 000;
            s.name = "Default";
            cout << "variables updated!" << endl;
            cout << "GPA: " << s.gpa << endl;
            cout << "ID: " << s.id << endl;
            cout << "Name: " << s.name << endl;
        };
};
int main()
{
    Teacher t;
    Student s(122,"Tural",99);
    t.printInfo(s);
    t.change(s);
}
