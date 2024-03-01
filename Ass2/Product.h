#include "address.h"
#include<iostream>

class Product//container class which holds object of another class 
{
    int productcode;
    int price;
    std::string pname;
    Address deliveryaddress;//contained obj of address class
    public:
    Product(int pcode, int pr, std::string pnm, int pin, std::string ctname);
    Product();
    void display();

    int getProductcode() const { return productcode; }
    void setProductcode(int productcode_) { productcode = productcode_; }

    std::string getPname() const { return pname; }
    void setPname(const std::string &pname_) { pname = pname_; }

    int getPrice() const { return price; }
    void setPrice(int price_) { price = price_; }
};