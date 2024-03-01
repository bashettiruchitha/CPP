#include "savig.h"

SavingAccount::SavingAccount(float saving=0)
{
    savingaccount=saving;
}

void SavingAccount::modify(float value)
{
    annualinterst=value;

}

void SavingAccount::print()
{
    std::cout<<"\n saving balance"<<savingaccount;
}

float SavingAccount::monthlyinterest()
{
    savingaccount += savingaccount*annualinterst/12;
    return savingaccount*annualinterst/12;
}
