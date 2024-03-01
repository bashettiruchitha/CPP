#include "Simcard.h"
#include<iostream>

class Mobile
{
    std::string companyname;
    int price;
    std::string typeofmobile;
    SimCard s;//contained of obj of the simcard 
    public:
    Mobile();
    Mobile(std::string cname,int cost,std::string type ,int simno,std::string vend);
    void display();

    std::string getCompanyname() const { return companyname; }
    void setCompanyname(const std::string &companyname_) { companyname = companyname_; }

    int getPrice() const { return price; }
    void setPrice(int price_) { price = price_; }

    std::string getTypeofmobile() const { return typeofmobile; }
    void setTypeofmobile(const std::string &typeofmobile_) { typeofmobile = typeofmobile_; }
    


};

