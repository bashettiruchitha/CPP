#include<iostream>
#include <istream>
using namespace std;

class User
{
    int no;
    std::string uname ;
    public:
    User(){
        no=12;
        uname="ruchitha";

    }
    User(int n,std::string name ){
        no=n;
        uname=name;

    }
    void display()
    {
       std:: cout<<"the no is "<<no<<endl;
       std::cout<<"the name is "<<uname<<endl;

    }
    bool operator==(const User &p)
    {
        return this->getNo()== p.getNo();
        //   return this ->a>=p3.a && this->b>=p3.b;
    }

    int getNo() const { return no; }
    void setNo(int no_) { no = no_; }
    std::string getUname() const { return uname; }
    void setUname(const std::string &uname_) { uname = uname_; }


    friend istream& operator>>(istream &is,User &p);
    // int operator[](int uno){
    //     if(uno==no)
    //     {
    //         throw "user id not same ";
    //         return uno;

    //     }

    // }



};
istream&  operator>>(istream &is,User &p)
{
    cout<<"the enter the id "<<endl;;
    is>>p.no;
    return is;
}


int main()
{
    User s1;
    s1.display();
    User s2(11,"karthick");
    User s3(12,"ramesh");
    User s4(13,"ruchitha");
    User s5;
  
    cin>>s5;
    if(s2==s5){
        cout<<"id are same";
    }else
    {
        cout<<"id are not same ";
    }

    // bool r1=s2==s3;
    // bool r2=s3==s4;
    // cout<<"\t s2 == s3  "<<r1<<endl;
    // cout<<"\t s3 == s4  "<<r2<<endl;
    
    // if(!(r1==r2) )
    // {
    //     cout<<"same id "<<endl;
    // }else
    // {
    //     cout<<"not same id "<<endl;
    // }

}