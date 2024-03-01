#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<ostream>
#include<cstring>
using namespace std;
class Customer
{
    char *custname;
    public:
    Customer();
    Customer(const char *custname );
    ~Customer();
    Customer(const Customer &cc2);
    void accept();
   const char *getCustname() const { return custname; }
    void setCustname(char *custname_) {strcpy(custname ,custname_) ;}
    // friend ostream& operator<<(ostream &os,const Customer &c);
    friend ostream& operator<<(ostream &os,const Customer &pp);
    
    
};


#endif // CUSTOMER_H
