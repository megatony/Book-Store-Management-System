/**
* @file Product.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Product Header File
*
* Detailed description of file.
*/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

/*!o An abstract item for sale in the store
o Notable Attributes:
 name - the name of the item
 id - unique ID for the item
 price - the price of the item
o Possible Methods:
 printProperties(): shows the all properties of the items.
*/
class Product
{
public:
	
	Product();
	
	~Product();

	//! shows the all properties of the items.
	virtual void printProperties() = 0;
	
	int getID();
	void setID(int ID);
	string getName();
	void setName(string name);
	double getPrice();
	void setPrice(double price);

private:
	//! unique ID for the item
	int ID;
	//! the name of the item
	string name;
	//! the price of the item
	double price;
	

};


#endif

