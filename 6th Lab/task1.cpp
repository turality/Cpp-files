#include <iostream>
using namespace std;
class Student{
    protected:
        string fname;
        int id;
        string lname;
        public:
            Student(string f,string l, int i)
            {
                fname = f;
                lname = l;
                id = i;
            }
            void printInfo()const{
                cout << fname << " " << lname << endl;
                cout << "id:" << id << endl;
            }
};
class UndergraduateStudent:public Student{
    protected:
    string major;
    public:
        UndergraduateStudent(string f,string l, int i,string mj):Student(f,l,i){
            major = mj;
        }
        void printUndergraduate()const{
            printInfo();
            cout << "Major: " << major << endl;
        }
};
class GraduateStudent:public Student{
    protected:
        bool isworking;
    public:
        GraduateStudent(string f,string l, int i,bool isw):Student(f,l,i)
        {
            isworking = isw;
        }
        void printGraduate()const{
            printInfo();
            if (isworking == true)
            {
                cout << "is working" << endl;
            }
            else{
                cout << "is not working" << endl;
            }
        }
};
class Freshman:public UndergraduateStudent{
    protected:
        int yearAtUni = 1;
    public:
        Freshman(string f,string l, int i,string mj):UndergraduateStudent(f,l,i,mj){}
        void printFresh()const{
            printUndergraduate();
            cout << "studying " << yearAtUni << " year" << endl;
        }
};
class DoctoralStudent:public GraduateStudent{
    protected:
        string degree = "PhD";
    public:
        DoctoralStudent(string f,string l, int i,bool isw):GraduateStudent(f,l,i,isw){}
        void printDoctoral()const{
            printGraduate();
            cout << "Degree: " << degree << endl;
        }
};
int main(){
    
    Student S("Tural","Muradli",112);
    S.printInfo();

    UndergraduateStudent U("Tural","Muradli",11,"Software eng");
    U.printUndergraduate();
    
    GraduateStudent G("Tural","Muradli",11,false);
    G.printGraduate();
    
    Freshman T("Tural","Muradli",11,"Software eng");
    T.printFresh();
    
    DoctoralStudent D("Tural","Muradli",11,false);
    D.printDoctoral();
}
