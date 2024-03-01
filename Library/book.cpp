#include "book.h"

Book::Book(int number, const std::string &name, double price, const std::string &author, int copies, int issues, BookCategory cat)
{
    bookno=number;
    bookname=name;
    price=price;
    authorname=author;
    noofcopiesinlibrary=copies;
    noofcopiesissused=issues;
    cat=cat;
}

Book::~Book()
{
    std::cout<<"~book()";
}

void Book::accept()
{
    std::cout<<"\n Enter book number";
    std::cin>>bookno;
    std::cout<<"\n enter book name ";
    std::cin>>bookname;
    std::cout<<"\n enter price";
    std::cin>>price;
    std::cout<<"\n enter author name";
    std::cin>>authorname;
    std::cout<<"\n enter no of copies";
    std::cin>>noofcopiesinlibrary;
    std::cout<<"\n enter the copies issused";
    std::cin>>noofcopiesissused;
    std::cout<<"\n enter the category(0 for ficition ,1 for biography,2 for historical,3 for adventure) ";
   int categoryint;
   std::cin>>categoryint;
   cat=static_cast<BookCategory>(categoryint);
   
   
   
    }


void Book::display()
{
    std::cout<<"\n book number"<<bookno;
    std::cout<<"\n book name "<<bookname;
    std::cout<<"\n book price"<<price;
    std::cout<<"\n author "<<authorname;
    std::cout<<"\n copies"<<noofcopiesinlibrary;
    std::cout<<"\n issused"<<noofcopiesissused;
    std::cout<<"\ncategory :";
     switch(cat){
        case BookCategory::FICTION:
            std::cout<<"fiction";
            break;
        case BookCategory::BIOGRAPHY:
            std::cout<<"biography";
            break;
            case BookCategory::HISTORICAL:
            std::cout<<"historical";
            break;
            case BookCategory::ADVENTURE:
                std::cout<<"adventure";
                break;

     }
}

std::ostream &operator<<(std::ostream &os, const Book &book)
{
   os<<"\n book number"<<book.bookname;
    os<<"\n book name "<< book .bookname;
    os<<"\n book price"<<book .price;
    os<<"\n author "<<book .authorname;
    os<<"\n copies"<<book .noofcopiesinlibrary;
    os<<"\n issused"<<book .noofcopiesissused;
    std::cout<<"\ncategory :";
     switch(book.cat){
        case BookCategory::FICTION:
            os<<"fiction";
            break;
        case BookCategory::BIOGRAPHY:
            os<<"biography";
            break;
            case BookCategory::HISTORICAL:
            os<<"historical";
            break;
            case BookCategory::ADVENTURE:
               os<<"adventure";
                break;

     }
    
}
