#ifndef DATE_H
#define DATE_H
class Date
{
    int day;
    int month;
    int year;
    public:
        Date()
        {
            day = 1;
            month = 1;
            year = 1;
        };
        Date(int d, int m, int y);
        void printDate()const;
};
#endif