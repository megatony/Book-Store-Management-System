/**
* @file Product.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* Last change : Ahmet Faruk GÜNTÜRKÜN 10.01.2013 19:49 GMT + 3
* @brief Product C++ File
*
* Detailed description of file.
*/

#include "Product.h"


Product::Product()
{//! A constructor
}


Product::~Product()
{//! A destructor
}

int Product::getID(){ //!It gets ID of a product.
	return ID;
}
void Product::setID(int ID){ //!It sets ID of a product.
	Product::ID = ID;
}
string Product::getName(){ //!It gets name of a product.
	return name;
}
void Product::setName(string name){ //!It sets name of a product.
	Product::name = name;
}
double Product::getPrice(){ //!It gets price of a product.
	return price;
}
void Product::setPrice(double price){ //!It sets price of a product.
	Product::price = price;
}

void Product::printProperties(){
	cout << "Name:" << Product::getName() << endl;
	cout << "ID number:" << Product::getID() << endl;
	cout << "Price:" << Product::getPrice() << endl;
}