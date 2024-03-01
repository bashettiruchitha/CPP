#include<iostream>
#include "customer.h"
#include "date.h"
using namespace std;

class Bill
{
    int billnumber;
    public :Customer customerinfo;
   public: Date billdate;
    int billamount;

    public:
    Bill();
    void accept();
    friend ostream& operator<<(ostream &os,const Bill &d);
    ~Bill();
    void billamount1(Bill*);

    int getBillnumber() const { return billnumber; }
    void setBillnumber(int billnumber_) { billnumber = billnumber_; }

    int getBillamount() const { return billamount; }
    void setBillamount(int billamount_) { billamount = billamount_; }

    Customer getCustomerinfo() const { return customerinfo; }
    void setCustomerinfo(const Customer &customerinfo_) { customerinfo = customerinfo_; }

    Date getBilldate() const { return billdate; }
    void setBilldate(const Date &billdate_) { billdate = billdate_; }



};
