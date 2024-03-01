#include "Inventory.h"

inventory::inventory()
{
    balance_stock=20;
}

inventory::inventory(int pid,int pstock,std::string pname):productcode(pid)
{
    description_of_product=pname;
    setStock(pstock);
}

int inventory::purchase(int quantity)
{
    balance_stock+=quantity;
    return balance_stock;
}

int inventory::sale(int quant)
{
     if(checkStock(quant))
     {
        balance_stock-=quant;
     }
     return balance_stock;   
}

bool inventory::checkStock(int stock)
{
    if(balance_stock-stock>20)
     {
        return true;
     }
     else{
        throw std::runtime_error(" Low stock level");
     }
}

void inventory::setStock(int s)
{
    if(s>20)
    {
        balance_stock=s;
    }
    else{
        throw std::runtime_error(" Low Stock Level");
    }
}
