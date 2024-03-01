#include<iostream>
#include"library.h"
#include"book.h"

double calavg(Book p[], int size,BookCategory cat1){
    double totalprice=0;
    int count=0;
    for(int i=0;i<size;++i){
        if(p[i].getCat()==cat1){
            totalprice += p[i].getPrice();
            ++count;
        }
    }
    if(count == 0){
        return 0.0;
    }
    return totalprice/count;
}

int main()
{
    Book p1[3];
    for(int i=0;i<3;i++){
        p1[i].accept();
    }
    int catint;
    std::cout<<"\n enter the category(0 for ficition ,1 for biography,2 for historical,3 for adventure) ";
    std::cin>>catint;
    BookCategory cat2;
    switch (catint)
    {
    case 0:cat2=BookCategory::FICTION;
        break;
    case 1:cat2=BookCategory::BIOGRAPHY;
        break;
        case 2:cat2=BookCategory::HISTORICAL;
        break;
        case 3:cat2=BookCategory::ADVENTURE;
        break;
    
    }
    double avgprice=calavg(p1,3,cat2);
    std::cout<<"\n average price "<<avgprice<<std::endl;
    return 0;

}