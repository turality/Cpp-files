#include<iostream>
#include<cmath>
#include "EquilateralTriangle.h"

using namespace std;

EquilateralTriangle::EquilateralTriangle(){
    side = 100;
}
EquilateralTriangle::EquilateralTriangle(double a)
{
    side = a;
}
void EquilateralTriangle::setSide(double a)
{
    side = a;
}