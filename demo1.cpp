#include<iostream>
#include<cstring>
using namespace std;


class Customer
{
    int customerid;
    char cname[20];
    int custage;
    static int y;
    static int count;

    public:
    static void showy(){
        cout<<y;

    }
    Customer()
    {
        char name[] = "ruchitha";
        customerid=y;
        y++;
        strcpy(cname,name);
        custage=21;
        count++;
    }
    Customer(int custid,const char *name,int cage){
        customerid=y;
        y++;
        strcpy(cname,name);
        custage=cage;
        count++;

    }
    void display(){
        cout<<"your id is"<<customerid<<"you name is "<<cname<<"your age is"<<custage<<endl;

    }
    static void showcount(){
        cout<<"count"<<count<<endl;
    }
    
};
int Customer::y=12;
int Customer::count=0;
int main(){
   
    Customer c1;
    c1.display();
    Customer c2;
    c2.display();
     Customer::showy();
    
    // Customer c1;
    // c1.display();
    Customer c3(11,"nandini",21);
    c3.display();

    Customer *ctr=new Customer;
    ctr->display();
    
    Customer crr[3]={{12,"chitra",20},{13,"Anjani",22},{21,"chandhana",21}};
    for(int i=0;i<3;i++){
        crr[i].display();
    }
     Customer::showcount();
    delete ctr;


}