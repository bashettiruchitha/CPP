#include<iostream>
#include<cstring>
using namespace  std;

class Customer{
    char *custname;//pointer data member
  
    public :
    ~Customer()//destructor 
    {
        delete custname;//to avoid the memory leakage
        cout<<"~destructor()";
    
    }
    Customer(){
        cout<<"constructor called ";
        custname=new char[10];//allocated in heap memory  to store the customer names
        strcpy(custname,"ruchitha");


    }
    Customer(const char *name){
        cout<<"constructor with parameters"<<endl;
        custname=new char[strlen(name)+1];
        strcpy(custname,name);

    }
    void display()
    {
        cout<<"the name is "<<custname<<endl;

    }
    Customer(const Customer &cc2){//cc2 is reference to c2 object

    custname=new char[strlen(cc2.custname)+1];//avoid the dangling pointer problem
    strcpy(custname,cc2.custname);
    }
};
int main()
{
    // Customer c1;
    // c1.display();
    Customer c2("rahul");
    c2.display();
    Customer c3(c2);//create one object as copy of another
    //copy constructor to copy one object to another object
    c3.display();

    Customer *cptr=new Customer;
    delete cptr;//request to call destructor

}