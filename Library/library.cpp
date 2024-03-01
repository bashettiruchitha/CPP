#include "library.h"

Library::Library():bookptr(nullptr)
{
}

Library::Library(const Library &cc)
{
    bookptr = new Book(*cc.bookptr);
}

Library::~Library()
{
    delete bookptr;
}

Book *Library::operator->() const
{
    return bookptr;
}

Book Library::operator*() const
{
    return *bookptr;
}

void Library::createBook()
{
    bookptr=new Book();
    bookptr->accept();
}

void Library::displayBook()
{
    if(bookptr){
        bookptr->display();
    }else{
        std::cout<<"\n no book available";
    }
}
