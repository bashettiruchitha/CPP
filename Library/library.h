#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
class Library
{
        Book* bookptr;
        public:
        Library();
        Library(const Library& cc);
        ~Library();
        Book* operator->() const;
        Book operator*() const;
        void createBook();
        void displayBook();
};

#endif // LIBRARY_H
