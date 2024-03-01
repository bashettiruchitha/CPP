#include<iostream>

using namespace std;

class Point{
    int x;
    int y ;
    public:
    Point(){
        x=0;
        y=0;
    }
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }

    void display(){
        cout<<x<<"  "<<y;
    }
    Point  operator+(const Point &p2)
    //here pont act as return by value
    {
        Point pobj;
                //p1 ,p2
        pobj.x = this->x+p2.x;
        pobj.y=this->y+p2.y;
        return pobj;
    }
Point  operator-(const Point &p3)
    {
        Point pobj1;//local obj
                //p1 ,p2
        pobj1.x = this->x-p3.x;
        pobj1.y=this->y-p3.y;
        return pobj1;
    }
    
    bool operator==(const Point &p2){
        return this->x==p2.x && this->y==p2.y;
    }
    // non member function it will have [this pointer]
    // friend void operator<<(ostream &os,const Point &pp){//dont use :: operator
    //     os<<pp.x<<" "<<pp.y;
    // }
    friend ostream& operator<<(ostream &os,const Point &pp);
    friend istream& operator>>(istream &is, Point &p1);
       Point& operator++(){
            ++x;
            ++y;
            return * this;
        }
       Point operator++(int)//double not work only int can work //post incremenet 
     {
        Point tempobj =*this;
        x++;
        y++;
        return tempobj;
    }
    // friend void operator>>(istream &is,const Point &p1){
    //     is<<p1.y<<" "<<p1.x;
    // }
};
 ostream&  operator<<(ostream &os,const Point &pp)
 {
    os<<pp.x<<""<<pp.y<<endl;
    }

    istream& operator>>(istream &is, Point &p1){//istream we wont use const 
    cout<<"enter x the number";
    is>>p1.x;
    cout<<"enter y the number ";
    is>>p1.y;
    return  is;


    }
//** it store the address of the value 
int main(){
    Point p5(4,6);
    // Point p6=++p5;//p5.operator++()
    // Point p6=p5++;
    // cout<<p5;
    // cout<<p6;
    Point p8;
    cin>>p8;
    cout<<p8;
    // Point p1(3,4),p2(8,2);
    // Point p3=p1+p2;//p1.operator+(p2)
    // Point p4=p1-p2;
    //  p3.display();
    // cout<<p3;//ostream object <<point class object
    // cout<<p4;
    //  p4.display();

    // if(p1==p2){
    //     cout<<"equal";
    // }else{
    //     cout<<"not eqaul";
    // }
}