#include "date.h"
#include <ostream>

Date::Date()
{
    date=12;
    month=1;
    year=2023;
}

Date::Date(int d, int m, int y)
{
    date=d;
    month=m;
    year=y;

}

void Date::accept()
{
    std::cout<<"\n enter the date ,month,year";
    std::cin>>date>>month>>year;

    if(month>=1 && month<=12){
    if((month==2 && date>=1 && date<=28)|| 
    ((month==1 || month==3 || month==5 || month==7|| month==8|| month==10 || month==12 )&& date>=1 && date<=31)
    ||((month==4|| month==6|| month==9|| month==11)&& date>=1 && date<=30))
    {
            cout<<"\n accepted the date \n ";
        }
    }
}

ostream &operator<<(ostream &os, const Date &d)
{
    os<<"\n date : "<<d.date<<"\n month:"<<d.month<<"\n year: "<<d.year;
    
}
