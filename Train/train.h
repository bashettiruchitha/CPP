#ifndef TRAIN_H
#define TRAIN_H

#include<iostream>
enum TravelClass{AC2TIER =1,FIRST=2,SLEEPER=3,AC3TIER=4,AC3ECONOMY=5};
class Train
{
    int trainno;
    std::string trainname;
    int noofseats;
    enum TravelClass travels;
    std::string fromplace;
    std::string toplace ;
    int distance;

    public:
    Train();
    void display();
    // void booktrain();
    bool booktrain(int);
    void settraindetails();

    int getTrainno() const { return trainno; }
    void setTrainno(int trainno_) { trainno = trainno_; }

    std::string getTrainname() const { return trainname; }
    void setTrainname(const std::string &trainname_) { trainname = trainname_; }

    int getNoofseats() const { return noofseats; }
    void setNoofseats(int noofseats_) { noofseats = noofseats_; }

   

    std::string getFromplace() const { return fromplace; }
    void setFromplace(const std::string &fromplace_) { fromplace = fromplace_; }

    std::string getToplace() const { return toplace; }
    void setToplace(const std::string &toplace_) { toplace = toplace_; }

    int getDistance() const { return distance; }
    void setDistance(int distance_) { distance = distance_; }

    enum TravelClass getTravels() const { return travels; }
    void setTravels(const enum TravelClass &travels_) { travels = travels_; }

   
    

};

#endif // TRAIN_H
