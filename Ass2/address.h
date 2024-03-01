#include<iostream>
class Address
{
    int pincode;
    std::string city;
    public:
        Address();
        Address(int p,std::string c);
        void display();

        int getPincode() const { return pincode; }
        void setPincode(int pincode_) { pincode = pincode_; }

        std::string getCity() const { return city; }
        void setCity(const std::string &city_) { city = city_; }
};