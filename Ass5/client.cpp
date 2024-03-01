#include "salesperson.h"
#include "Manager.h"
#include<typeinfo>

int main()
//derived class is called second 1st the base class is called then next derived class is called
{
    // int a=100; references only refer to the object only
    // int &r=a;
    // -------------------------------
    // Manager m;it will throw bad_cast
    // Emp &ep=m;
    // ----------------------------------

    Salesperson sp1(102,"rahul",9000,30000,0.05);
    Emp &ep=sp1;
    //base class is refer to derive class
    // Salesperson & sp=dynamic_cast<Salesperson&>(ep);
    // if casting fail (in case of refernce it throws exception) then it will throw bad_cast exception
    try
    {
        Salesperson &sp=dynamic_cast<Salesperson &>(ep);
        sp.cal();
    
    }
    catch(std::bad_cast &obj)
    {
        std::cout<<obj.what()<<"\n";
    }
    




// Emp *ep1=new Manager(4,55,12,"ruchii",45000);
// if(typeid(*ep1)== typeid(Salesperson))
// {
//     Salesperson *sp=dynamic_cast<Salesperson*>(ep1);
    //static conversion is used for basics operation
    //static_cast:it will show some other values it will convert some other casting so that better to use dynamic_cast
    // dynamic_casting is used for safe down casting 
    // in inheritance concept there is only aa dynamic_casting becoz it is down up 
    // down cast-convert base class pointer to derive class pointer 
    /*
    dynamic_cast
    returns zero if casting is failed (in case of pointer)
    returns adress on sucess type cast
    */
//     if(sp==0){
//         std::cout<<"\n type casting";
//     }
//     else{//returns address on sucessfull caste 
//         sp->cal();
//     }
// }else{
//     std::cout<<"it is not sales persom";
// }

    // Salesperson sp1;
    // sp1.display();
    // return 0;

//    Salesperson *sp= new Salesperson();
// Emp *ep = new Salesperson(104,"ruchi",3400,450000,0.05); //pointer is craeted for base class 
// ep->display();//it called only function for base class not for derived class 
// std::cout<<"\n total salary "<<ep->calTotalSalary();

// Salesperson *sp = dynamic_cast<Salesperson*> (ep);//type casting 
// sp->cal();
// Emp *ep1=new Manager(4,55,12,"ruchii",45000);
// ep1->display();
// Manager * mp=dynamic_cast<Manager*>(ep1);
// mp->calin();
// std::cout<<"\n total salary "<<ep1->calTotalSalary();

// delete ep;
// delete ep1;

}



//whenever base class function is marked as virtual
// -virtual function pointer is added to each object in hierarchy.
// -vftr(virtual function pointer) points to vftable[vftable is an array which holds addresses of virtual
// funcs of respective class]
// vfptr is created as per obj
// vfpte is initialized with base address of vftable inside constructor.
// vftable is created per class
// ********make only base class func as virtual*************
// delete destructor are called 

