#include "emp.h"

class Manager :public Emp
{
   int no_subordinates;
   double incentive_persub;
   public:
   Manager();
   Manager(int no,double in,int id,std::string name,int salary);
   void  display ();
   double calTotalSalary();
   ~Manager();
   void calin();


};