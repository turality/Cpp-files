#include <iostream>
using namespace std; 
class Student{
    protected:
    int id;
    string fname;
    string lname;
    float math,chem,physics;
    public:
        Student()
        {
            id = 0;
            fname = "None";
            lname = "None";
            math = 0;
            chem = 0;
            physics = 0;
        }
        Student(int i, string f, string l, float m, float c, float p)
        {   
            id = i;
            fname= f;
            lname = l;
            math = m;
            chem = c;
            physics = p;
        }
        void setID(int i)
        {
            id = i;
        }
        void setFname(string f)
        {
            fname = f;
        }
        void setLname(string l)
        {
            lname = l;
        }
        void setMath(int m)
        {
            math = m;
        }
        void setChem(int c)
        {
            chem = c;
        }
        void setPhysics(int p)
        {
            physics = p;
        }
        void printInfo()const{
            cout << fname << ' ' << lname << endl;
            cout << "ID: " << id << endl;
            cout << "Math: " << math << endl;
            cout << "Chemistry: " << chem << endl;
            cout << "Physics: " << physics << endl;
        }
};
class Total_marks: public Student{
    public:
        float total()const{
            float total;
            total = math+chem+physics;
            return total;
        }
};
class Average_Marks: public Student{
    public:
        double average()const
        {
            double ave = 0;
            ave = (math+chem+physics)/3;
            return ave;
        }
};
int main(){
    Total_marks T;
    T.setChem(12);
    T.setFname("Tural");
    T.setLname("Muradli");
    T.setID(112);
    T.setMath(100);
    T.setPhysics(100);
    T.printInfo();
    cout << T.total() << endl;
    Average_Marks M;
    M.setChem(12);
    M.setFname("Tural");
    M.setLname("Muradli");
    M.setID(112);
    M.setMath(100);
    M.setPhysics(100);
    cout << M.average() << endl;
    
}