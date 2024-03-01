//header guard
#ifndef EMP_H
#define EMP_H

#include<iostream>
class Emp
{
    int empid;
    std::string ename;
    double esalary;
    double HRA,MA,Ptax,pf;
    void calAllownces()//private function-helper function -they help public function
    {
        HRA =esalary*0.02;
        MA=esalary*0.03;
        Ptax=esalary*0.05;
        pf=esalary*0.02;

    }
    public:
    Emp();
    Emp(int eid,std::string enm,double esal );
    ~Emp();
    void display();
    //if we keep virtual it will show the only which we pass values derived class and
    // if we wont keep the virtual then it will show all values except the derived parameters
   virtual double calTotalSalary();
};

#endif // EMP_H
