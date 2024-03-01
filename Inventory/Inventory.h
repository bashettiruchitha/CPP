#ifndef INVENTORY_H
#define INVENTORY_H
#include<iostream>
class inventory{
    int productcode;
    int balance_stock;
    std::string description_of_product;
    public:
      inventory();
      inventory(int,int,std::string);
      int purchase(int);
      int sale(int);
      bool checkStock(int);
      void setStock(int);

      int getProductcode() const { return productcode; }
      void setProductcode(int productcode_) { productcode = productcode_; }

      int balanceStock() const { return balance_stock; }
      void setBalanceStock(int balanceStock) { balance_stock = balanceStock; }

      std::string descriptionOfProduct() const { return description_of_product; }
      void setDescriptionOfProduct(const std::string &descriptionOfProduct) { description_of_product = descriptionOfProduct; }
};


#endif // INVENTORY_H
