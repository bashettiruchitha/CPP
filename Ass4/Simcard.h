#include<iostream>
class SimCard
{
    int simcardno;
    std::string vendor;

    public:
    SimCard();
    SimCard(int no,std::string name);
    void display();

    int getSimcardno() const { return simcardno; }
    void setSimcardno(int simcardno_) { simcardno = simcardno_; }

    std::string getVendor() const { return vendor; }
    void setVendor(const std::string &vendor_) { vendor = vendor_; }
};
