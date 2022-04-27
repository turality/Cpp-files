#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H
#include <cmath>
class EquilateralTriangle{
    double side;
    public:
        EquilateralTriangle();
        EquilateralTriangle(double);
        void setSide(double);
        double getSide()
        {
            return side;
        };
        double getPerimeter(){
            return side * 3;
        };
        double getArea(){
            return side*side*sqrt(3)/4;
        };
};
#endif