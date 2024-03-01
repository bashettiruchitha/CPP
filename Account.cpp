#include<iostream>
#include<cstring>
using namespace std;

class Account{
    int accno;
    char *name;
    double balance;
    static int count;
    public:
    Account(){//default constructor
        accno=count;
        count++;
        strcpy(name,"ruchitha");
        balance=5000;

    }
    Account(const char *acname,double bal){//parameter constrcutor
        accno=count;
        count++;
        name=new char[strlen(acname)+1];
        strcpy(name,acname);
        balance=bal;

    }
    ~Account(){//destructor
        delete name;
        cout<<"~destructor is called";

    }
    void deposite(double ammount){
        balance=balance+ammount;
        cout<<"the amount is deposite "<<ammount<<endl;

    }
    void withdraw(double ammount2)
    {
        balance=balance-ammount2;
        cout<<"the amount is with draw"<<ammount2<<endl;

    }
    Account(const Account &acc2)//copy constructor
    {
        name=new char[strlen(acc2.name)+1];
        strcpy(name,acc2.name);

    }
    void display(){
        cout<<"the account no "<<accno<<"account holder name  "<<name<<"the account balance is  "<<balance<<endl;
        

    }

    int getAccno() const { return accno; }
    void setAccno(int accno_) { accno = accno_; }

    double getBalance() const { return balance; }
    void setBalance(double balance_) { balance = balance_; }


};
int Account ::count=5000;
int main(){
    Account a1;
    a1.display();
    Account a2("jaya",5000);
    a2.display();
    a2.deposite(400);
    a2.withdraw(200);
    Account a3(a2);
    a3.display();

    cout<<"updtaed value="<<a2.getBalance();

    Account *name=new Account;
    delete name;
    
}