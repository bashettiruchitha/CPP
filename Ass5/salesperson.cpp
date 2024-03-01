#include "salesperson.h"

Salesperson::Salesperson():salesamount(2500),commissionrate(0.05)
{
    std::cout<<"\n salesperson() called";
}

Salesperson::Salesperson(int id, std::string ename, double esal, double samt, double crate):Emp(id,ename,esal)
,salesamount(samt),commissionrate(crate)
{
    
    std::cout<<"\n salesperson() called";
}

void Salesperson::display()
{
//     emp.show();
//    std:: cout<<"\t"<<salesamount<< " "<<commissionrate;
    // Emp::show();//to avoid the recurssion wehave to class name 
     std:: cout<<"\t"<<salesamount<< " "<<commissionrate;
    //  std::cout<<"total salary "<<calTotalSalary();


}

Salesperson::~Salesperson()
{
    std::cout<<"~salesperson()";
}

double Salesperson::calTotalSalary()//method overriding 
{
    return Emp::calTotalSalary()+salesamount*commissionrate;
}
