#ifndef DATE_H
#define DATE_H

#include<iostream>


enum Month{JANUARY=1,FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
enum Examtype{ONLINE=1,OFFLINE=2};
class Date
{
    static const unsigned int monthsPerYear = 12;
    unsigned int day;
    unsigned int month;
    unsigned int year;
    int daysPerMonth(unsigned int m) const
    {
    static const int days[monthsPerYear + 1] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (m == 2 && isLeapYear(year)) return 29;
        return days[m];
     }
    public:
    Date();  
    Date(unsigned int day, unsigned int month, unsigned int year);
    // void setDay( unsigned int day);
    // void setMonth(unsigned int month);
    // void setYear(unsigned int year);
    void display();
    bool checkday(unsigned int testday);


    unsigned int getDay() const { return day; }
    void setDay(unsigned int day_) { day = day_; }

    unsigned int getMonth() const { return month; }
    void setMonth(unsigned int month_) { month = month_; }

    unsigned int getYear() const { return year; }
    void setYear(unsigned int year_) { year = year_; }

    void print() const;  // Print date
    bool checkDay(unsigned int testDay) const;

    bool isLeapYear(unsigned int year) const;
    int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool Date::checkDay(unsigned int testday)
{
 if (testday > 0 && testday <= daysPerMonth(month))
  {
            return true;
        }
        throw std::invalid_argument("Invalid day for given month.");
        return false;
}

};

#endif // DATE_H
