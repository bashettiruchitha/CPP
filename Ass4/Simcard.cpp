#include "Simcard.h"

SimCard::SimCard()
{
    simcardno=123;
    vendor="ruchi";
}

SimCard::SimCard(int no, std::string name)
{
    simcardno=no;
    vendor=name;
}

void SimCard::display()
{
  std::cout<<"no is"<<simcardno;
  std::cout<<"vendor name is "<<vendor;

}
