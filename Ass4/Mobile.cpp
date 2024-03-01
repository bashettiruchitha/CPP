#include "Mobile.h"

Mobile::Mobile()
{
    companyname="motrala";
    price=45000;
    typeofmobile="iphone";
}

Mobile::Mobile(std::string cname, int cost, std::string type,int simno,std::string vend)
:s(simno,vend)
{
    companyname=cname;
    price=cost;
    typeofmobile=type;
}

void Mobile::display()
{
    std::cout<<"\tcompany name "<<companyname;
    std::cout<<"\t price of mobile is "<<price;
    std::cout<<"\t type of the mobile "<<typeofmobile;
    s.display();
}
