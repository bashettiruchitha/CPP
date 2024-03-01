#include<iostream>
#include<cstring>
//using namespace std;

class Bankaccount
{
    int accno;
    char *custname;
    static double rateInt;
    double balance;

    public:
        Bankaccount():accno(10101)
        {
            custname=new char[strlen("Abhishek")+1];
            strcpy(custname,"Abhishek");
            balance=0;
        }
        Bankaccount(int accnum,const char *name,double b)
        {
            accno=accnum;
            custname=new char[strlen(name)+1];
            strcpy(custname,name);
            setBalance(b);
        }
        bool checkBalance(int amount)
        {
            if(balance-amount>=3000)
                return true;
            
            throw std::runtime_error("Low balance exception");
        }
        void withdraw(double amount)
        {
           if(checkBalance(amount))
                balance-=amount;
        }
        void setBalance(int bal)
        {
            if(bal>=3000)
                balance=bal;
            else
                throw std::runtime_error("Low balance exception");
        }
        void print()
        {
            std::cout<<"\n"<<accno<<"  "<<custname<<"  "<<balance<<" "<<rateInt;
        }
        Bankaccount(const Bankaccount &b1)
        {
            accno=b1.accno;
            custname=new char[strlen(b1.custname)+1];
            strcpy(custname,b1.custname);
            balance=b1.balance;
        }
        void operator=(const Bankaccount &b3)
        {
            accno=b3.accno;
            if(custname!=nullptr)
                delete custname;
            custname=new char[strlen(b3.custname)+1];
            strcpy(custname,b3.custname);
            balance=b3.balance;
        }
        bool operator==(const Bankaccount &b)
        {
            return !strcmp(custname,b.custname);
        }
        char operator[](int index)
        {
            if(index>=0 && index<strlen(custname))
                return custname[index];
            throw std::runtime_error("index out of bounds");
        }
};
double Bankaccount::rateInt;
int main()
{
    Bankaccount b1;
    try
    {
        b1.setBalance(10000);
        b1.withdraw(4000);
        b1.print();
        b1.withdraw(5000);
        b1.print();
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Bankaccount b2(b1);
    b2.print();

    Bankaccount b3(10104,"Mayur",80000);
    Bankaccount b4(10105,"Riya",56000);

    // b4=b3;
    // b4.print();

    if(b4==b3)//operator 
    {
        std::cout<<"\n same names";
    }
    else{
        std::cout<<"\n diff name";
    }
    try//charcter operator[] of index
    {
          char ch = b4[20];
          std::cout<<"ch = "<<ch;
    }
    catch(const std::runtime_error& e)
    {
        std::cerr <<"\n"<< e.what() << '\n';
    }
    
 

    
}

// minimum balance should be 3k