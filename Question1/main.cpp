#include<iostream>
#include"savig.h"

float SavingAccount::annualinterst=0;
int main()
{
  SavingAccount s1(2000);
  SavingAccount s2(3000);
  s1.modify(0.03);
  std::cout<<"\n s1 monthly interest()"<<s1.monthlyinterest();
  std::cout<<"\n s2 monthly interest()"<<s2.monthlyinterest();
  s1.print();
  s2.print();
  s1.modify(0.04);
  std::cout<<"\n s1 monthly interest()"<<s1.monthlyinterest();
  std::cout<<"\n s2 monthly interest()"<<s2.monthlyinterest();
  s1.print();
  s2.print();
   

}