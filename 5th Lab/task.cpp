#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Time{
    int hours,minutes,seconds;
    public:
        Time()
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        };
        Time(int h, int m, int s)
        {
            hours = h;
            minutes = m;
            seconds = s;
        };
        void printTime()
        {
            cout << setfill('0') << setw(2)<<hours <<":"<<setfill('0') << setw(2) <<minutes << ":" << setfill('0') << setw(2) << seconds << endl;
        };
        Time operator-(const Time &t)
        {
            Time t1;
            t1.hours = this->hours-t.hours;
            t1.minutes=this->minutes-t.minutes;
            t1.seconds=this->seconds-t.seconds;
            return t1;
        };
        bool operator==(const Time &t)
        {
            if (t.hours == this->hours && t.minutes == this->minutes &&t.seconds == this->seconds)
            {
                return true;
            }
            else{
                return false;
            }
        };
        bool operator>(const Time &t)
        {
            if (this->hours>t.hours && this->minutes >t.minutes && this->seconds > t.seconds)
            {
                return true;
            }
            else{
                return false;
            }
        };
        friend istream &operator>>(istream &input, Time &t)
        {
            cout << "hours:";
            input >> t.hours;
            cout<<"minutes:";
            input>>t.minutes;
            cout <<"seconds:";
            input >>t.seconds;
            return input;
        };
        friend ostream &operator<<(ostream &output,Time &t)
        {
            output << setfill('0') << setw(2)<<t.hours <<":"<<setfill('0') << setw(2) <<t.minutes << ":" << setfill('0') << setw(2) << t.seconds << endl;
            return output;
        };
        
};
int main()
{
    Time t1(10,2,3);
    Time t2(1,1,1);
    Time t3;

    t3 = t1-t2;
    t3.printTime();

    if (t1==t2)
    {
        cout << "the objects are the same!" << endl;
    }
    else{
        cout << "the objects are not the same!" << endl;
    }
    t1.printTime();
    t2.printTime();

    if (t1>t2)
    {
        cout << "t1 is more than t2" << endl;
    }
    else{
        cout << "t2 is more than t1" << endl;
    }
    cin >>t3;
    t3.printTime();
    cout << t3;
}