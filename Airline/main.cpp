#include "train.h"

void serach(std::string flightno,Flight f[],int num)
{
    for (int i = 0; i < num; i++)
    {
        if(f[i].getFlightnumber()== flightno){
            f[i].display();
            return;
        }
       
    }

    

}
int cal(std::string toplace1){
    int fare=0;
    if(toplace1 =="goa"){
        fare = 4470;
    }else if(toplace1 == "delhi"){
        fare = 4181;
    }else if(toplace1 == "Bangalore"){
        fare = 2170;
    }else if(toplace1 == "ahmedabad"){
        fare = 1752;
    }else {
        std::cout<<"\n invalid destination"<<std::endl;
     return 0;
    }
    return fare;
    // std::cout<<"Fare from "<<fromplace1<<" to"<<toplace1<<":"<<fare<<std::endl;
}

int main()
{
    const int num=2;
    Flight flight[num];

    for(int i=0;i<2;i++){
        std::cout<<"\n enter the flight details";
        flight[i].setflightdeatils();
    }

    std::string n;
    std::cout<<"\n enter the flight number";
    std::cin>>n;
    serach(n,flight,2);
    std::string dest;
    std::cout<<"\n enter destination";
    std::cin>>dest;

    // int f=flight[0].cal(dest);
    std::cout<<"fare distance"<<cal(dest)<<std::endl;
    std::cout<<"----------";
    // if(f != 0 ){
    //     std::cout<<"frae to"<<dest<<":"<<f<<std::endl;
    //     return 0;
    // }

    std::cout<<"inforamtion about the flight details";
    for(int i=0;i<2;i++){
        flight[i].display();
        std::cout<<"--------------------";
    }





}