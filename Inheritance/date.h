#include<iostream>
using namespace std;


class Date
{
    int date;
    int month;
    int year;
    public:
    Date();
    Date(int ,int,int);
    void accept();
    friend ostream& operator<<(ostream &os,const Date &d);

    int getDate() const { return date; }
    void setDate(int date_) { date = date_; }

    int getMonth() const { return month; }
    void setMonth(int month_) { month = month_; }

    int getYear() const { return year; }
    void setYear(int year_) { year = year_; }
    

};