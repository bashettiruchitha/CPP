#include<iostream>

class Animal
{
     std::string color;
    char gender;
    int age;
    int weight;
    public:
   
  
    Animal():color("white"),gender('f'),age(12),weight(25){}
    Animal(std::string c,char g,int a,int w ):color(c),gender(g),age(a),weight(w){}
    void color()
    {
        std::cout<<"\n the color is "<<color<<"color";
    }
    virtual void makesound()=0;
    virtual void eat()=0;


};
class dog :public Animal 
{
    std::string name;
    public:
    dog():name("lab dog"){}
    dog(std::string c ,char gender, int a,int w,std::string name):Animal(c,gender,a,w),name(name){}
    void makesound()
    {
        std::cout<<"dog is barking ....."<<color<<"the gender is "<<gender;
    }
    void eat()
    {
        std::cout<<"dog eat mutton chicken";
    }

};
class cat:public Animal
{
    std::string catname;
    public:
    cat():catname("cutiee"){}
    cat(std::string c ,char gender, int a,int w,std::string name):Animal(c,gender,a,w),catname(name) {}
    void makesound()
    {
        std::cout<<"the cat says memow";
    }
    void eat()
    {
        std::cout<<"the cat drinks millk ";
    }

};
int main()
{
    Animal *a=new dog();
    //  a->color();
    a->eat();
    a->makesound();

    a=new cat();
    //  a->color();
    a->eat();
    a->makesound();




}