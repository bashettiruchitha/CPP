#ifndef BOOK_H
#define BOOK_H

#include<iostream>
enum BookCategory{FICTION,BIOGRAPHY,HISTORICAL,ADVENTURE};
class Book
{
    int bookno;
    std::string bookname;
    double price;
    std::string authorname;
    int noofcopiesinlibrary;
    int noofcopiesissused;
    enum BookCategory cat;
    public:
    Book(int number=0,const std::string& name=" ",double price=0.0,
    const std::string& author="",int copies=0,int issues=0,BookCategory cat=BookCategory::FICTION);
    ~Book();
    void accept();
    void display();
    enum BookCategory getCat() const { return cat; }
    void setCat(const enum BookCategory &cat_) { cat = cat_; }
    double getPrice() const { return price; }
    void setPrice(double price_) { price = price_; }
    friend std::ostream& operator<<(std::ostream& os,const Book& book);

    
};

#endif // BOOK_H
