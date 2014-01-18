/**
* @file ShoppingCart.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief ShoppingCart Header File
*
* Detailed description of file.
*/
#include <algorithm>
#include <string>
#include <iostream>
#include <list>
#include <iomanip>
using namespace std;


#include "Payment.h"
#include "ProductToPurchase.h"
#include "Customer.h"
#include "Product.h"



typedef list<ProductToPurchase *>::iterator ProductToPurchaseIter;
/*!o A shopping cart for the customer
o Notable Attributes:
 itemsToPurchase – the list of itemsToPurchase currently in the shopping cart (use
list or vector from STL)
 payment – the payment method to purchase items
 isBonusUsed – this has the value false as a default. If this set to true, customer pay
shopping price discounted by his bonus.
o Possible Methods:
 printProducts() – shows the items currently in the cart
 void addProduct(itemToPurchase) - add an item to the shopping cart
 void removeProduct(itemToPurchase) - remove an item from the shopping cart
 placeOrder() – perform the payment for the items in the cart and send invoice to
custumer’s email.
 cancelOrder() – cancel the order
 showInvoice() – show the invoice
*/
class ShoppingCart
{
public:
	
	ShoppingCart(Customer * customer);
	
	~ShoppingCart();

	

	Payment* getPaymentMethod();
	void setPaymentMethod(Payment* paymentMethod);
	Customer* getCustomer();

	void setCustomer(Customer* customer);
	void setBonusUsed();

	void addProduct(ProductToPurchase* _productToPurchase);
	
	void removeProduct(ProductToPurchase* _productToPurchase);

	void placeOrder();

	void cancelOrder();

	void printProducts();

	void showInvoice();

	list< ProductToPurchase * > getProductToPurchase();

private:
	list< ProductToPurchase * > productToPurchase; //!A list to store products to purchase.
	Payment * paymentMethod;
	Customer * customer;
	bool isBonusUsed;
	bool _order = false;
};

