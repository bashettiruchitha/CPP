#include "emp.h"

Emp::Emp():empid(101),ename("ruchitha"),esalary(25000)
{
    std::cout<<"\n Emp() is called ";
       calAllownces();
}


Emp::Emp(int eid, std::string enm, double esal):empid(eid),ename(enm),esalary(esal)
{
    std::cout<<"\n emp(..) is called ";
    calAllownces();
}

Emp::~Emp()
{
    std::cout<<"\n ~Emp() is called";
}

void  Emp::display()
{
    std::cout<<"emp id= "<<empid<<" ename="<<ename<<" eslary="<<esalary<<" hra="<<HRA<<" ma="<<MA<<"ptax= "<<Ptax<<"pf= "<<pf;
}
 double Emp::calTotalSalary()
{
 
 return esalary-HRA-MA-Ptax-pf;

}


// Emp()::Emp():empid(101),ename("ruchitha"),esalary(25000)
// {
//     std::cout<<"\n Emp() is called ";
//         calAllownces();
// }