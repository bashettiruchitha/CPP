#ifndef TRAIN_H
#define TRAIN_H

#include<iostream>
enum FlightClass{ECONOMY=1,PRIMEECONOMY=2,BUSINESS=3,FIRSTCLASS=4};
class Flight{
    std::string flightnumber;
    enum FlightClass flight;
    int ticketavailable;
    int ticketissused;
    std::string fromplace;
    std::string toplace;
    public:
    Flight();
    void display();
    void bookflight(int);
    void setflightdeatils();


    std::string getFlightnumber() const { return flightnumber; }
    void setFlightnumber(const std::string &flightnumber_) { flightnumber = flightnumber_; }

    enum FlightClass getFlight() const { return flight; }
    void setFlight(const enum FlightClass &flight_) { flight = flight_; }

    int getTicketavailable() const { return ticketavailable; }
    void setTicketavailable(int ticketavailable_) { ticketavailable = ticketavailable_; }

    int getTicketissused() const { return ticketissused; }
    void setTicketissused(int ticketissused_) { ticketissused = ticketissused_; }

    std::string getFromplace() const { return fromplace; }
    void setFromplace(const std::string &fromplace_) { fromplace = fromplace_; }

    std::string getToplace() const { return toplace; }
    void setToplace(const std::string &toplace_) { toplace = toplace_; }
    

};
#endif // TRAIN_H
