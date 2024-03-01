#include "bill.h"


Bill::Bill()
{
    billnumber=12;
    billamount=2000;
}

void Bill::accept()
{
    cout<<"\n enter the bill number";
    cin>>billnumber;
  
    // cout<<"customer info ";
    // customerinfo.accept();
    // cout<<"emter the bill date ";
    // billdate.accept();
    cout<<"\n bill ammount";
    cin>>billamount;
    
    

}

Bill::~Bill()
{
    cout<<"~bill()";
}
// void Bill::billamount1( )
// {
//     for(int i=0;i<3;i++)
//     {

//     }

// }
ostream &operator<<(ostream &os, const Bill &d)
{
  os<<"bill number: "<<d.getBillnumber()<<"\n customer details "<<d.customerinfo.getCustname()<<" \n bill date "<<d.getBilldate()<<"\n bill ammount"<<d.getBillamount();

return os;


}


