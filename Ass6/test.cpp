#include<iostream>
// abstract class - a class with pure virtaul function
class Shape//abstract class 
{

    std::string color;
    public:
        Shape():color("white"){}
        Shape(std::string c):color(c){}
        void fillColor()
        {
            std::cout<<"\n filling with "<<color<<"color";
        }
        virtual void calarea()=0;//it is a pure virtual function 
        //we have to do type casting when there is no virtaul void calarea()
        // abstract in base class there is no implemet  there is freedom to write the code
        // to assistance polymoriphsm
        // we cant create abstract class obj we can create the ref or pointer only 
};
class Circle :public Shape
{
    double radius;
    public:
    Circle():radius(5){}
    Circle(std::string c ,double r):Shape(c),radius(r){ }
    void calarea()
    {
        std::cout<<"\n area of circle ="<<3.14*radius*radius;
    }
};
class Square :public Shape
{
    double side;
    public:
    Square():side(5){}
    Square(std::string c ,double s):Shape(c),side(s){ }
    void calarea()
    {
        std::cout<<"\n area of square ="<<side*side;
    }
};
int main()
{
    Shape *sp= new Circle();
    sp->fillColor();
    sp->calarea();
    sp=new Square();
    sp->fillColor();
    sp->calarea();

}
