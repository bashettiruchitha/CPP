#include "car.h"
#include<iostream>


void Car::display()
{
    std::cout<<"\n vechile brand "<<getVechilebrand()<<std::endl;
    std::cout<<"\n vechile exshowroom "<<getVechileexshowroom()<<std::endl;
    std::cout<<"\n vechile chassis number "<<getChassisnumber()<<std::endl;
    std::cout<<"\n vechile insurance "<<getVechileins()<<std::endl;
    std::cout<<"\n vechile tax "<<getVechiletax()<<std::endl;
    std::cout<<"\n vechile cartype "<<getCtype()<<std::endl;
}

void Car::accept()
{
    int i;
    std::string temps;
    float tempf;
    std::cout<<"\n vechile brand ";
    std::cin>>temps;
    setVechilebrand(temps);

    std::cout<<"\n vechile exshowroom ";
    std::cin>>tempf;
    setVechileexshowroom(tempf);

    std::cout<<"\n vechile chassis number";
    std::cin>>temps;
    setChassisnumber(temps);

    std::cout<<"\n vechile insurance ";
    std::cin>>tempf;
    setVechileins(tempf);

    std::cout<<"\n vechile tax";
    std::cin>>tempf;
    setVechiletax(tempf);

    std::cout<<"enter a category 0-SEDAN 1-ALTO"<<std::endl;
    std::cin>>i;
    switch(i)
    {
        case 1:setCtype(SEDAN);
            break;
        case 2:setCtype(ALTO);
            break;
    }
    std::cout<<"records added sucessfully ";

}
