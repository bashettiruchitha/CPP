#ifndef CAR_H
#define CAR_H

#include "vechile.h"
enum Cartype{SEDAN , ALTO};
class Car :public Vehicle
{
    enum Cartype ctype;
    public:
    void display();
    void accept();

    enum Cartype getCtype() const { return ctype; }
    void setCtype(const enum Cartype &ctype_) { ctype = ctype_; }
    


};

#endif // CAR_H
