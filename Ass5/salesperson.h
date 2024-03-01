#include "emp.h"

class Salesperson:public Emp
{
    double  salesamount,commissionrate;

    public:
    Salesperson();
    Salesperson(int id,std::string ename,double esal,double samt,double crate);
    void display();
    ~Salesperson();
   double calTotalSalary();
   void cal()//child spl function
   {
    std::cout<<"\n commission amount="<<salesamount*commissionrate;

   }
   /*
   to cal commission amount?=salesamount*commissionrate
   void cal()//child spl function
   {

   }
   */
};



