#include <iostream>
using namespace std;
class Person{
    protected:
        string fname;
        string lname;
        int address;
        int phone;
    public:
        Person(string f,string l, int a, int p)
        {
            fname = f;
            lname = l;
            address = a;
            phone = p;
        }
        void printInfo()const{
            cout << fname << ' ' << lname << endl;
            cout << "Address: " << address  << endl;
            cout << "Phone: " << phone << endl;
        }
};
class Employee:public Person{
    protected:
        int id;
        int age;
    public:
        Employee(string f,string l, int a, int p,int i,int ag):Person(f,l,a,p)
        {
            age = ag;
            id = i;
        }
        void EmployeeInfo()const{
            printInfo();
            cout << "Age: " << age << endl;
            cout << "ID: " << id << endl;
        }
};
class Manager:public Employee{
    protected:
        string depName;
        int salary;
    public:
        Manager(string f,string l, int a, int p,int i,int ag,string dep,int s):Employee(f,l,a,p,i,ag)
        {
            salary = s;
            depName = dep;
        }
        void managerInfo()const{
            EmployeeInfo();
            cout << "Salary: " << salary << endl;
            cout << "Department name: " << depName << endl;
        }
        void Highest(Manager M1, Manager M2, Manager M3, Manager M4,Manager M5)
        {
            int MaxIndex = 0;
            int arr[5] = {M1.salary,M2.salary,M3.salary,M4.salary,M5.salary};
            for (int i = 0;i<4;i++)
            {
                if (arr[i]>arr[i+1])
                {
                    cout << arr[MaxIndex] << endl;
                    MaxIndex = i;
                }  
            }
            cout << "Max salary: " << arr[MaxIndex] << endl;
        }
};

int main(){
    /*
    Person P("Tural","Muradli",799,9943);
    P.printInfo();
    

    Employee E("Tural","Muradli",799,9943,112,19);
    E.EmployeeInfo();
    */
    Manager M1("Tural","Muradli",799,9943,112,19,"PAE",11234);
    //M1.managerInfo();
    Manager M2("Jack","Daniel",124,23413,3424,12,"Software",13423);
    Manager M3("John","michael",239,342,324,12,"Accountance",3424);
    Manager M4("Rob","Boss",49432,42343,3243,65,"economics",14321);
    Manager M5("Akif","Zakirov",4322,4324,234,89,"CompEng",2434);
    M1.Highest(M1,M2,M3,M4,M5);
}
