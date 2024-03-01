#include "bike.h"
#include<iostream>
void Bike::display()
{
   std::cout<<"\n vechile brand "<<getVechilebrand()<<std::endl;
    std::cout<<"\n vechile exshowroom "<<getVechileexshowroom()<<std::endl;
    std::cout<<"\n vechile chassis number "<<getChassisnumber()<<std::endl;
    std::cout<<"\n vechile insurance "<<getVechileins()<<std::endl;
    std::cout<<"\n vechile tax "<<getVechiletax()<<std::endl;
    std::cout<<"\n vechile type "<<getBtype()<<std::endl;
    switch(getBtype())
    {
        case BikeType::COMMUNTE:
            std::cout << "Bike type is communte" << std::endl;
            break;
        case BikeType::SPORTS:
            std::cout << "Bike type is sports" << std::endl;
            break;
    }
}

void Bike::accept()
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

    std::cout<<"enter the a btype 1-SPORTS 2-COMMUNTE";
    std::cin>>i;
    switch (i)
    {
    case 1:setBtype(SPORTS);
        break;
    case 2:setBtype(COMMUNTE);
        break;
    
    
    }
    std::cout<<"\n record added successfully";
}
