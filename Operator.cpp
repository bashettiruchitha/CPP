#include<iostream>
using namespace std;

class Pointer
{
    int a;
    int b;
    public:
    Pointer()
    {
        a=0;
        b=0;
    }
    Pointer(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        std::cout<<a<<"  \t  "<<b;
    }
    Pointer operator+(const Pointer &p)
    {
        Pointer pobj;
        pobj.a=this->a+p.a;
        pobj.b=this->b+p.b;
        return pobj;

    }
    Pointer operator-(const Pointer &p2)
    {
        Pointer pobj1;
        pobj1.a=this->a-p2.a;
        pobj1.b=this->b-p2.b;
        return pobj1;

    }
    Pointer operator*(const Pointer &p3){
        Pointer pobj2;
        pobj2.a=this->a*p3.a;
        pobj2.b=this->b*p3.b;
        return pobj2;
    }
    Pointer operator/(const Pointer &p4)
    {
        Pointer pobj3;
        pobj3.a=this->a/p4.a;
        pobj3.b=this->b/p4.b;
        return pobj3;
    }
     Pointer operator%(const Pointer &p5)
    {
        Pointer pobj4;
        pobj4.a=this->a%p5.a;
        pobj4.b=this->a%+p5.b;
        return pobj4;
    }
    Pointer operator++(int)
    {
        Pointer temp=*this;
        a++;
        b++;
        return temp;
    }
    Pointer operator--(int)
    {
        Pointer temp1=*this;
        a--;
        b--;
        return temp1;
    }
    Pointer&  operator++()
    {
        ++a;
        ++b;
        return *this;
    }
    Pointer& operator--()
    {
        --a;
        --b;
        return *this;
    }
    bool operator==(const Pointer &p2 )
    {
        return this->a==p2.a && this->b==p2.b;
    }
    bool operator>=(const Pointer &p3)
    {
        return this ->a>=p3.a && this->b>=p3.b;
    }
     
    }

friend ostream& operator<<(ostream &os,const Pointer &pp );
friend istream& operator>>(istream &is, Pointer &pp1);

};
ostream&  operator<<(ostream &os,const Pointer &pp)
{
    os<<pp.a<<" "<<pp.b;
}
istream& operator>>(istream &is, Pointer &pp1){
    cout<<"enter the a value ";
    is>>pp1.a;
    cout<<"enter the b value ";
    is>>pp1.b;
    return is;
}


int main()
{
    Pointer p(5,6),p2(3,4);
    // Pointer p3 =p+p2;
    // Pointer p4=p-p2;
    // Pointer p5=p*p2;
    // Pointer p6=p/p2;
    // Pointer p7=p%p2;
    // p4.display();
    // p3.display();
    // p5.display();
    // p6.display();
    // p7.display();

    Pointer p8(5,6);
    Pointer p9=p8++;
    Pointer p10=++p8;
    Pointer p11=p8--;
    Pointer p12=--p8;
    // p9.display();
    // p10.display();
    p11.display();
    p12.display();

    Pointer p13;
    cin>>p13;
    cout<<p13;

    cout<<p9;
    cout<<p10;

if(p==p2)
{
    std:: cout<<"same";
}else
{
    std:: cout<<"not same";
}
if(p>=p2)
{
    std:: cout<<"same";
}else
{
    std:: cout<<"not same";
}




}