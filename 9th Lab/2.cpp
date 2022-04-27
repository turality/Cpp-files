#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
template <class C>
class Average
{
public:
    C param1, param2, param3;
    Average(C a, C b, C c)
    {
        param1 = a;
        param2 = b;
        param3 = c;
    }
    C getAverage()
    {
        return (param1 + param2 + param3) / 3;
    }
    C getMax()
    {
        C max = param1;
        if (param2 > max)
            max = param2;
        if (param3 > max)
            max = param3;
        return max;
    }
    C getMin()
    {
        C min = param1;
        if (param2 < min)
            min = param2;
        if (param3 < min)
            min = param3;
        return min;
    }
};
int main()
{
    int a1, a2, a3;
    double b1, b2, b3;
    cout << "enter 3 numbers" << endl;
    cin >> a1 >> a2 >> a3;
    cout << "enter 3 double" << endl;
    cin >> b1 >> b2 >> b3;
    Average<int> ave(a1, a2, a3);
    Average<double> aved(b1, b2, b3);
    cout << "Int Average: " << ave.getAverage() << endl;
    cout << "Int Max: " << ave.getMax() << endl;
    cout << "Int Min: " << ave.getMin() << endl;
    cout << "Double Average: " << aved.getAverage() << endl;
    cout << "Double Max: " << aved.getMax() << endl;
    cout << "Double Min: " << aved.getMin() << endl;
}