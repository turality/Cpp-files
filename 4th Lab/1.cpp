#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
    private:
        double side1;
        double side2;
        double side3;
    public:
        Triangle();
        Triangle(double,double,double);
        double Area();
        friend void Mult(Triangle);
};
Triangle::Triangle()
{
    side1 = 0;
    side2 = 0;
    side3 = 0;
};
Triangle::Triangle(double s1,double s2, double s3)
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
};
double Triangle::Area()5
{
    double p = (side1+side2+side3)/2;
    double area = sqrt(p*(p-side1)*(p-side2)*(p-side3));
    return area;
}
void Mult(Triangle t)
{
    t.side1 = t.side1 * 5;
    t.side2 = t.side2 * 5;
    t.side2 = t.side3 * 5;
    cout << "side 1 updated: " << t.side1 << endl;
    cout << "side 2 updated: " << t.side2 << endl;
    cout << "side 3 updated: " << t.side3 << endl;
};
int main()
{
    Triangle t(6,8,10);
    cout << "Area: " << t.Area() << endl; 
    Mult(t);
}