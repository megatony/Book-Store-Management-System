/**
* @file ProductToPurchase.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief ProductToPurchase C++ File
*
* Detailed description of file.
*/

#include "ProductToPurchase.h"
#include "Product.h"
#include "Book.h"
#include "Magazine.h"
#include "MusicCD.h"


ProductToPurchase::ProductToPurchase(Product* _product, int _quantity){//! A constructor.
	product = _product;
	quantity = _quantity;
}



ProductToPurchase::~ProductToPurchase(){
	//! A destructor.
}

Product* ProductToPurchase::getProduct(){
	return product;
}

void ProductToPurchase::setProduct(Product* product){
	//!It sets a product to add in purchase list.
	ProductToPurchase::product = product;


}

int ProductToPurchase::getQuantity(){
	//!It gets quantity of a product in the purchase list.
	return quantity;

}
void ProductToPurchase::setQuantity(int quantity){
	//!It sets quantity of a product before add it to purchase list. 
	ProductToPurchase::quantity = quantity;
}

/* Test Program for ProductToPurchase Class 
void main(){
	Product *P1, *P2, *P3;
	ProductToPurchase *PtP1, *PtP2, *PtP3;

	P1 = new Book("Daniel Defoe", "Yayinevi", 100, 1, "Robinson Crusoe", 50);
	P2 = new Magazine(250, "Geographi", 1, "National Geographic", 50);
	P3 = new MusicCD("Tarkan", "POP", 2, "Kuzu Kuzu", 25);

	PtP1 = new ProductToPurchase(P1,10);
	PtP2 = new ProductToPurchase(P2,25);
	PtP3 = new ProductToPurchase(P3,50);

	cout << "There are " << PtP1->getQuantity() << "piece(s) " << PtP1->getProduct()->getName() << endl;
	cout << "There are " << PtP2->getQuantity() << "piece(s) " << PtP2->getProduct()->getName() << endl;
	cout << "There are " << PtP3->getQuantity() << "piece(s) " << PtP3->getProduct()->getName() << endl;

}*/