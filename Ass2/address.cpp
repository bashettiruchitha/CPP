#include "address.h"

Address::Address()
{
    pincode=123;
    city="pune";
    std::cout<<"address() called";
}

Address::Address(int p, std::string c)
{
    pincode=p;
    city=c;
    std::cout<<"address(.........) is called";
}

void Address::display()
{
   std:: cout<<"the pincode is "<<pincode;
   std:: cout<<"the city is "<<city;

}
