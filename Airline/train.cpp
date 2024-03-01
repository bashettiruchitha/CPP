#include "train.h"

Flight::Flight()
{
    std::cout<<"flight()";
}

void Flight::display()
{
    std::string fr;
    switch (flight)
    {
    case FlightClass::ECONOMY:fr="ECONOMY";
        break;
    case FlightClass::PRIMEECONOMY:fr="PRIMEECONOMY";
        break;
    case FlightClass::BUSINESS:fr="BUSINESS";
        break;
    case FlightClass::FIRSTCLASS:fr="FIRSTCLASS";
        break;

    }
    std::cout<<"\n flight number "<<flightnumber;
    std::cout<<"\n flight class"<<fr;
    std::cout<<"\n tickets available"<<ticketavailable;
    std::cout<<"\n tickets issued"<<ticketissused;
    std::cout<<"\n from place "<<fromplace;
    std::cout<<"\n to place "<<toplace;
}

void Flight::bookflight(int ticketstobook)
{
    if(ticketavailable >= ticketstobook)
    {
        ticketissused += ticketstobook;
        ticketavailable -= ticketstobook;
        std::cout<<ticketstobook<<"tickets booked sucess"<<std::endl;
    }else
    {
        std::cout<<"insufficient tickets avaialble"<<std::endl;
    }
}

void Flight::setflightdeatils()
{
    int choice;
    std::cout<<"\n enter the flight number:";
    std::cin>>flightnumber;
    std::cout<<"enter the flight class (1-ECONOMY,2-PRIMEECONOMY,3-BUSINESS,4-FIRSTCLASS):";
    std::cin>>choice;
    switch (choice)
    {
    case 1:flight=FlightClass::ECONOMY;
        break;
    case 2:flight=FlightClass::PRIMEECONOMY;
    break;
    case 3:flight=FlightClass::BUSINESS;
        break;
    case 4:flight=FlightClass::FIRSTCLASS;
        break;
    }
    std::cout<<"\n enter the tickets available";
    std::cin>>ticketavailable;
    std::cout<<"\n enter the tickets issused";
    std::cin>>ticketissused;
    fromplace="Mumbai";
    std::cout<<"enter the toplace";
    std::cin>>toplace;

}

