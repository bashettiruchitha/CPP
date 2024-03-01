#include<iostream>
using namespace std;
void add(int a,int b){//if there are same  and b and p and q then ther error
    cout<<"int+int"<<a+b;
}
void add(float a,float b){
     cout<<"float + float="<<a+b;
}
 void add(double a ,double b){
    cout<<"double+ double="<<a+b;
}
void display(int x,int y=0,int z=99){
    cout<<x<<" "<<y<<""<<z;

}
int main()
{
     display(7);
    display(10,20,30);
    // add(3,4);
    // add(1.4,5.3);//if we comment the double method theit can be converted to {int,float} we lead to ambiguous
    
    
    // add(3.5f,4.5f);// but float can be coverted by default
   
    // return 0;
}