#include "vechile.h"
#include "bike.h"
#include "car.h"
#include<iostream>
using namespace std;

void  serachbychassis(Vehicle *bikeinv,int bsize,Vehicle *carinv,int csize,std::string chassisnumber)
{
    int flag=0;
    for(int i=0;i<bsize;i++)
    {
        if(bikeinv[i].getChassisnumber()== chassisnumber){
            bikeinv[i].display();
            flag=1;
            break;
        }
    }
    for(int i=0;i<csize;i++)
    {
        if(carinv[i].getChassisnumber()== chassisnumber)
        {
            carinv[i].display();
            flag=1;
            break;
        }
    }
    if(!flag){
        std::cout<<"\n vechile with chassis number not found "<<chassisnumber<<std::endl;
    }

}
int countbybikecat(Vehicle *inv,int size,BikeType type)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        Bike *temp =dynamic_cast<Bike*>(&inv[i]);
        if(temp->getBtype() == type)
        {
        count++;
        }
    }

}
int countbycarcatt(Vehicle *inv,int size,Cartype type)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        Car *temp =dynamic_cast<Car*>(&inv[i]);
        if(temp->getCtype()== type)
        {
        count++;
        }
    }

}

int main()
{
    int bsize,csize;
    std::string chassisnumber;

    std::cout<<"enter the size  bike inv ";
    std::cin>>bsize;

    std::cout<<"enter the  size car inv ";
    std::cin>>csize;

    Vehicle *bikeinv = new Bike[bsize];
    Vehicle *carinv = new Car[csize];


    std::cout<<"enter the details to accept the details ";
    for(int i=0;i<bsize;i++){
        bikeinv[i].accept();
    }

    std::cout<<"enter the deatils to accept the details ";
    for(int i=0;i<csize;i++)
    {
        carinv[i].accept();
    }

    std::cout<<"enter the chassis number to serach "<<std::endl;
    std::cin>>chassisnumber;

    serachbychassis(bikeinv,bsize,carinv,csize,chassisnumber);






    
    // Vehicle *v = new Bike;
    // v->display();
    // v->accept();
    // return 0;

}