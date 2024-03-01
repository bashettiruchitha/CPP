#include "train.h"
 int choice;
Train::Train()
{
    std::cout<<"default constrcutor";
}

void Train::display()
{
    std::string tr;
    
    switch(travels){
        case TravelClass::AC2TIER:tr="AC2TIER";
            break;
        case TravelClass::FIRST:tr="FIRST";
        break;
        case TravelClass::SLEEPER:tr="SLEEPER";
        break;
        case TravelClass::AC3TIER:tr="AC3TIER";
        break;
        case TravelClass::AC3ECONOMY:tr="AC3ECONOMY";
        break;
       
    }
    std::cout<<trainname<<trainno<<tr<<noofseats<<fromplace<<toplace<<distance;

}

bool Train::booktrain(int s)
{
    if(s <= noofseats){
        noofseats -= s;
        return true;
    }
    return false;
}

void Train::settraindetails()
{
 std::cout<<"-enter the train name";
    std::cin>>trainname;
    std::cout<<"-enter the train no";
    std::cin>>trainno;
    std::cout<<"-enter the no of seats ";
    std::cin>>noofseats;
    std::cout<<"enter the travels  class (1-AC2TIER,2-FIRST,3-SLEEPER,4-AC3TIER,5-AC3ECONOMY):";
   
    std::cin>>choice;
    switch (choice)
    {
    case 1:travels=TravelClass::AC2TIER;
        break;
        case 2:travels=TravelClass::FIRST;
        break;
        case 3:travels=TravelClass::SLEEPER;
        break;
        case 4:travels=TravelClass::AC3TIER;
        break;
        case 5:travels=TravelClass::AC3ECONOMY;
        break;
 
    }
    fromplace="new delhi";
    
    std::cout<<"-enter the from place(Kolhapur Surat,Nagpur,ranchi,Dehradun) :";
    std::cin>>toplace;
    std::cout<<"enter the distance :";
    std::cin>>distance;


}
