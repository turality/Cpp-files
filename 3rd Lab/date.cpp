#include "date.h"
#include <iostream>
using namespace std;
Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
void Date::printDate()const
{
    cout << day << '/' << month << '/' << year << endl;
}