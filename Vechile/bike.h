#ifndef BIKE_H
#define BIKE_H
#include "vechile.h"
#include<iostream>
enum BikeType{SPORTS,COMMUNTE};
class Bike:public Vehicle
{
    enum BikeType btype;
    public:
    void display();
    void accept();

    enum BikeType getBtype() const { return btype; }
    void setBtype(const enum BikeType &btype_) { btype = btype_; }
    


};

#endif // BIKE_H
