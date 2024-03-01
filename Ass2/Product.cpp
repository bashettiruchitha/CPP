#include "Product.h"

Product::Product(int pcode, int pr, std::string pnm, int pin, std::string ctname)
:deliveryaddress(pin,ctname)//member initializer list 
{
    productcode=pcode;
    price=pr;
    pname=pnm;
}

Product::Product()
{
    productcode=112;
    price=300;
    pname="bag";

}

void Product::display()
{
    std::cout<<"productcode is "<<productcode<<" ";
     std::cout<<"price is "<<price<<" ";
      std::cout<<"name = "<<pname<<" ";
      deliveryaddress.display();//call display function of address class 
}
