#include "manager.h"

Manager::Manager():no_subordinates(5),incentive_persub(3450)
{
    std::cout<<" \n manager () is called";
  

}

Manager::Manager(int no, double in, int id, std::string name, int salary):Emp(id,name,salary),
no_subordinates(no),incentive_persub(in)
{
      std::cout<<" \n manager (.....) is called";

}

void Manager::display()
{
  std::cout<<no_subordinates<<"the incentive persub"<<incentive_persub;

}

double Manager::calTotalSalary()
{
    return Emp::calTotalSalary()+no_subordinates*incentive_persub ;
}

Manager::~Manager()
{
   std:: cout<<"~manager()";
}

void Manager::calin()
{
    std::cout<<"\n manager incentive ="<<incentive_persub*no_subordinates;
}
