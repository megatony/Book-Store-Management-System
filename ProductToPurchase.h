/**
* @file ProductToPurchase.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief ProductToPurchase Header File
*
* Detailed description of file.
*/

#ifndef PRODUCTTOPURCHASE_H
#define PRODUCTTOPURCHASE_H

#include "Product.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

/*!o A class includes an item and its quantity for adding to cart. 5
o Notable Attributes:
 product –an item to purchase
 quantity – the quantity of the item to purchase
*/
class ProductToPurchase
{
public:
	
	ProductToPurchase(Product* _product, int _quantity);
	
	~ProductToPurchase();

	Product* getProduct();
	void setProduct(Product* product);
	int getQuantity();
	void setQuantity(int quantity);
private:
	//! an item to purchase
	Product* product;
	//! the quantity of the item to purchase
	int quantity;
};

#endif