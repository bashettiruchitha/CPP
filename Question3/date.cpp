#include "date.h"

Date::Date()
{
    day=0;
    month=0;
    year=0;

}

Date::Date(unsigned int day, unsigned int month, unsigned int year)
{
    day=day;
    month=month;
    year=year;
    if(!checkDay(day))
    {
        throw "invalid day given for month and year ";
    }
    this->day=day;
}
void Date::display()
{
    std::cout<<"the day is "<<getDay();
    std::cout<<"the month is "<<getMonth();
    std::cout<<"the year is "<<getYear();
}




// void Date::setDay(unsigned int day)
// {
//     if (!checkDay(day)) {
//         throw std::invalid_argument("Invalid day for the given month and year.");
//     }
//     this->day = day;
// }

// void Date::setMonth(unsigned int month)
// {
//     if (month < 1 || month > 12) {
//         throw std::invalid_argument("Invalid month.");
//     }
//     this->month = month;
// }
// void Date::setYear(  unsigned int year)
// {
//     this->year = year;
// }

void Date::print() const
{
    std::cout << day << "/" << month << "/" << year;
}
bool Date::checkDay(unsigned int testDay) const
{
    if (testDay < 1 || testDay > daysPerMonth[month]) {
        return false;
    }
    if (month == static_cast<int>(Month::FEBRUARY) && testDay == 29 && isLeapYear(year)) {
        return true;
    }
    return true;
}

// unsigned int Date::getDay() const
// {
//     return day;
// }

// unsigned int Date::getMonth() const {
//     return month;
// }

// unsigned int Date::getYear() const {
//     return year;
// }

bool Date::isLeapYear(unsigned int year) const
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
   

}
