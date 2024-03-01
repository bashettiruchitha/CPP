#include<iostream>
#include "Inventory.h"
void search(inventory arr[],int s, int n)
{ 
    bool flag=false;
    for(int i=0;i<s;i++)
    {  
        if(n==arr[1].getProductcode())
        {
            std::cout<<" Product Found "<<std::endl;
            flag=true;
        }
      break;
    }
    if(flag==false)
     throw std::runtime_error("Not Found");
}
int main()
{
    inventory obj(101,30,"cosmetics");
    try
    {
        std::cout<<"after sale : "<<obj.sale(5)<<std::endl;
        std::cout<<"after sale : "<<obj.sale(4)<<std::endl;
        std::cout<<" after purchase :"<<obj.purchase(10)<<std::endl; 
        std::cout<<"after sale : "<<obj.sale(25)<<std::endl;
        //  std::cout<<" after purchase :"<<obj.purchase(10)<<std::endl;
        //  std::cout<<"after sale : "<<obj.sale(45)<<std::endl;
    }
    catch(const std::runtime_error& e)

    {
        std::cerr << e.what() << '\n';
    }
    inventory iarr[3]={{50111,100,"Household"},{50112,500,"Electonics"},{50113,300,"Sports"}};
    int size = sizeof(iarr)/sizeof(iarr[0]);
    int id;
    std::cout<<" enter the id to search : "<<std::endl;
    std::cin>>id;
    try
    {
        search(iarr,size,id);
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}