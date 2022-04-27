#include<iostream>
#include<cmath>
using namespace std;

class EquilateralTriangle{
    double side;
    public:
        void setSide(double a)
        {
            side = a;
        };

        double getArea()
        {
            return side * side *sqrt(3)/4;
        };
        double getSide()
        {
            return side;
        };
        double getPerimeter(){
            return side * 3;
        };
};
int main()
{
    EquilateralTriangle T1;
    T1.setSide(100);
    cout<<"AREA: "<<T1.getArea()<<endl;
    cout<<"PERIMETER: "<<T1.getPerimeter()<<endl;
}
