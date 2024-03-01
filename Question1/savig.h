#ifndef SAVIG_H
#define SAVIG_H

#include<iostream>

class SavingAccount
{
   static float annualinterst;
   float savingaccount;

   public:
   SavingAccount(float );
   static void modify(float );
   void print();
   float monthlyinterest();
    
};


#endif // SAVIG_H
