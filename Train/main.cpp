#include "train.h"
#include<iostream>
void  serachtrain(int trainnumber, Train train[] ,int size){
    bool found = false;
    for(int i=0;i<size;i++)
    {
        if(train[i].getTrainno()==trainnumber)
        {
            train[i].display();
            found=true;
            break;
        }
    }
        if(!found){
            std::cout<<"the train number not found";
        }
    }

int calfare(int d)
{
    if(d>100 && d<500){
        return 800;
    }else if(d>=500 && d<1000){
        return 900;
    }else if(d>=1000 && d<1500){
        return 1100;
    }else if(d>1500 && d<3000){
        return 1300;
    }else if(d>=3000){
        return 2000;
    }
}


int main(){

    const int i=2;
    Train t[i];
    // t[0].settraindetails("express",12,3,TravelClass::SLEEPER,"PUNE","JGL",500);
    // t[1].settraindetails("chennai",11,6,TravelClass::AC2TIER,"JGL","HYD",1200);
    for(int i=0;i<2;i++){
        std::cout<<"enter the train details "<<i+1<<":\n";
            t[i].settraindetails();
    }

    int tnum;
    std::cout<<"enter the train number to serach";
    std::cin>>tnum;
    serachtrain(tnum,t,2);

    int dist;
    std::cout<<"enter the distance ";
    std::cin>>dist;
    // int f=calfare(dist);
    std::cout<<"fare for the given information "<<calfare(dist)<<" Rs/"<<std::endl;

    std::cout<<"infromation about the all booked trains";
    for(int i=0;i<2;i++){
        t[i].display();
    std::cout<<"--------------------";
    }

    return 0;



}
// for(int i=0;i<2;i++){
//         std::cout<<"booking train "<<(i+1)<<std::endl;
//         t[i].booktrain(i);
//     }