#include"bill.h"
int main()
{
    Bill b[3];
    std::string name;
    for(int i=0;i<3;i++)
    {
        int id;
        std::cout<<"enter the bill id: \n ";
        std::cin>>id;
        b[i].setBillnumber(id);
        b[i].customerinfo.accept();
        b[i].billdate.accept();
        int bamount;
        std::cout<<"enter the bill amount: \n";
        std::cin>>bamount;
        b[i].setBillamount(bamount);
    }
    for(int i=0;i<3;i++)
    {
        std::cout<<"\n bill"<<i+1<<" : "<<b[i];

    }
     int total=0;
    for(int j=0;j<3;j++)
    {
        total+=b[j].getBillamount();
    }
    cout<<"\n total bill is "<<total;

    std::cout<<"enter the name of the customer :";
    cin>>name;
    for(int k=0;k<3;k++)
    {
        if(name==b[k].customerinfo.getCustname()){
            std::cout<<"\n bill details for customer "<<name<<" "<<b[k]<<"\n";

        }
    }
        
        // std::cout<<"enter the customer name for the bill"<<i+1;
        // std::cin>>name;
        // b[i].setCustomerinfo(Customer(name));
        // b[i].setBillamount(amount);
        return 0;
}

















    // char name[20];
    // int day,month,year;
    // double amount;

//     for(int i=0;i<2;i++)
//     {
//     std::cout<<"\n enter name amount day  month year ";
//     std::cin>>name>>amount>>day>>month>>year;
//     b[i].setCustomerinfo(Customer(name));
//     b[i].setBillamount(amount);
//     b[i].setBilldate(Date(day,month,year));

//    std::cout<<" amt = " <<b[i].getBillamount();

//     }


