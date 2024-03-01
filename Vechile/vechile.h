

#ifndef VECHILE_H
#define VECHILE_H

#include<iostream>

class Vehicle{
    std::string vechilebrand;
    std::string chassisnumber;
    float vechileexshowroom;
    float vechileins;
    float vechiletax;

    public:
    virtual void display()=0;
    virtual void accept()=0;

    
    std::string getVechilebrand() const { return vechilebrand; }
    void setVechilebrand(const std::string &vechilebrand_) { vechilebrand = vechilebrand_; }

    std::string getChassisnumber() const { return chassisnumber; }
    void setChassisnumber(const std::string &chassisnumber_) { chassisnumber = chassisnumber_; }

    float getVechileexshowroom() const { return vechileexshowroom; }
    void setVechileexshowroom(float vechileexshowroom_) { vechileexshowroom = vechileexshowroom_; }

    float getVechileins() const { return vechileins; }
    void setVechileins(float vechileins_) { vechileins = vechileins_; }

    float getVechiletax() const { return vechiletax; }
    void setVechiletax(float vechiletax_) { vechiletax = vechiletax_; }

  


};



#endif // VECHILE_H
