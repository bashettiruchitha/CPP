#include "customer.h"
#include <ostream>
using namespace std;

Customer::Customer()
{
    std::cout<<"\n customer()";
   custname=new char[10];
   strcpy(custname,"ruchitha");
}

Customer::Customer(const char *name)
{
    custname=new char[strlen(name)+1];
    strcpy(custname,name);

}

Customer::~Customer()
{
    cout<<"\n ~customer()";
}

Customer::Customer(const Customer &cc2)
{
    custname=new char[strlen(cc2.custname)+1];
    strcpy(custname,cc2.custname);
}

void Customer::accept()
{
    cout<<"\n cust name :";
    cin>>custname;
}

ostream &operator<<(ostream &os, const Customer &pp)
{
    os<<"\n customer name :"<<pp.custname;
}
