/**
* @file ShoppingCart.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief ShoppingCart C++ File
*
* Detailed description of file.
*/
#include "ShoppingCart.h"
#include "CreditCard.h"
#include "Cash.h"
#include "Check.h"




ShoppingCart::ShoppingCart(Customer * customer){//! A constructor.
	ShoppingCart::customer = customer;
}

ShoppingCart::~ShoppingCart(){//! A destructor.
	ProductToPurchaseIter PTPI;
	for (PTPI = productToPurchase.begin(); PTPI != productToPurchase.end(); PTPI++)
		productToPurchase.erase(PTPI);

	delete paymentMethod;
};

int deneme(int a, int b);

Payment* ShoppingCart::getPaymentMethod() 
{//!It gets payment method a object that in shopping cart.
	return paymentMethod;
}
void ShoppingCart::setPaymentMethod(Payment* paymentMethod) 
{//!It sets payment method a object that in shopping cart.
	ShoppingCart::paymentMethod = paymentMethod;


}
Customer* ShoppingCart::getCustomer(){
	//!It gets customer information of a shopping cart.
	return customer;
}

void ShoppingCart::setCustomer(Customer* customer) {
	//!It sets a customer information of a shopping cart.
	ShoppingCart::customer = customer;


}
void ShoppingCart::setBonusUsed(){
	//!It sets bonus are used in a shopping cart.

	if (isBonusUsed == true){
		isBonusUsed = false;
		cout << "your bonus :" << customer->getBonus() << endl;
		cout << "you won't use your bonus" << endl;
	}
	else{
		isBonusUsed = true;
		cout << "your bonus :" << customer->getBonus() << endl;
		cout << "you will use your bonus" << endl;
	}
}

void ShoppingCart::addProduct(ProductToPurchase* _productToPurchase) 
{//!It adds product to shopping cart.
	ProductToPurchaseIter PTPI;
	bool _include = false;
	if (!productToPurchase.empty()){
		for (PTPI = productToPurchase.begin(); PTPI != productToPurchase.end(); PTPI++)
		if ((*PTPI)->getProduct()->getID() == _productToPurchase->getProduct()->getID()){
			(*PTPI)->setQuantity((*PTPI)->getQuantity() + _productToPurchase->getQuantity());
			cout << _productToPurchase->getProduct()->getName() << " found and " << _productToPurchase->getQuantity() << " piece(s) added to your cart" << endl;
			_include = true;
			break;
		}
		if (!_include)
			productToPurchase.push_front(_productToPurchase);
	}
	else
		productToPurchase.push_front(_productToPurchase);


}

void ShoppingCart::removeProduct(ProductToPurchase* _productToPurchase) 
{//!It removes product from shopping cart.
	/*	ProductToPurchaseIter PTPI;
	PTPI = find(productToPurchase.begin(), productToPurchase.end(), _productToPurchase);
	if (PTPI != productToPurchase.end())
	productToPurchase.erase(PTPI);
	else
	cout << "not found\n";
	*/
	ProductToPurchaseIter PTPI;

	if (!productToPurchase.empty()){

		for (PTPI = productToPurchase.begin(); PTPI != productToPurchase.end(); PTPI++)
		if ((*PTPI)->getProduct()->getID() == _productToPurchase->getProduct()->getID()){

			if ((*PTPI)->getQuantity() > _productToPurchase->getQuantity()){
				(*PTPI)->setQuantity((*PTPI)->getQuantity() - _productToPurchase->getQuantity());
				cout << _productToPurchase->getProduct()->getName() << " found and " << _productToPurchase->getQuantity() << " piece(s) deleted from your cart" << endl;

				break;
			}
			else
				cout << "You don't have enough product in shopping cart to delete" << endl;
		}
	}
	else
		//cout << _productToPurchase->getProduct()->getName() << "not found\n";
		cout << "Shopping cart is empty." << endl;

}

void ShoppingCart::placeOrder()
{ //!It place order in a shopping cart.
	if (!productToPurchase.empty()){
		cout << "Please select your payment method:" << endl;
		cout << "1. Credit Card" << endl;
		cout << "2. Cash" << endl;
		cout << "3. Check" << endl;
		int selector;
		cin >> selector;
		if (selector == 1){
			//	Payment* creditCard;

			long _number;
			string _type;
			string _expDate;
			cout << "Credit card selected. Please enter your credit card informations: " << endl;
			cout << "Please enter your card's type:" << endl;
			cin >> _type;
			cout << "Please enter your card number:" << endl;
			cin >> _number;
			cout << "Please enter your card's expiration date:" << endl;
			cin >> _expDate;
			paymentMethod = new CreditCard(_number, _type, _expDate);
			setPaymentMethod(paymentMethod);
			paymentMethod->performPayment();
		}

		else if (selector == 2){
			//	Payment* cash;
			cout << "Cash selected. " << endl;//Thank you for your shopping!
			paymentMethod = new Cash;
			paymentMethod->performPayment();
		}
		else if (selector == 3){
			//	Payment* check;
			string _name;
			string _bankID;
			cout << "Check selected. Please enter your check information: " << endl;
			cout << "Please enter your name : " << endl;
			cin >> _name;
			cout << "Please enter check's bank ID : " << endl;
			cin >> _bankID;
			paymentMethod = new Check(_name, _bankID);
			setPaymentMethod(paymentMethod);
			paymentMethod->performPayment();
		}
		_order = true;
		showInvoice();
		cout << "Your payment method is : " << paymentMethod->getPaymentMethodName() << endl;
		cout << "Thank you for your shopping!" << endl;
		int i = 0;
		for (i; productToPurchase.size(); i++)
			productToPurchase.pop_front();
	}
	else
		cout << "any items in your cart, please add some items..." << endl;
}

void ShoppingCart::cancelOrder(){
	//!It cancel order in a shopping cart.
	cout << "Your order is cancelled" << endl;
}

void ShoppingCart::printProducts(){
	//!It prints product in a shopping cart.
	ProductToPurchaseIter PTPI;
	int i = 1;
	if (!productToPurchase.empty()){
		for (PTPI = productToPurchase.begin(); PTPI != productToPurchase.end(); PTPI++, i++){
			cout << i << ". product: " << (*PTPI)->getQuantity() << "piece(s) " << (*PTPI)->getProduct()->getName() << endl;
		}
	}
	else
		cout << "There are any ProductToPurchase" << endl;
}

void ShoppingCart::showInvoice(){
	//!It shows invoice of a object in a shopping cart.
	ProductToPurchaseIter PTPI;
	double sum;
	int i = 1;
	double totalPrice = 0;
	if (!productToPurchase.empty()){
		cout << "     No     " << "   Quantity   " << " Product Name " << endl;
		cout << " ---------- " << "  ---------  " << "  ------------ " << endl;
		for (PTPI = productToPurchase.begin(); PTPI != productToPurchase.end(); PTPI++, i++){
			cout << i << ". product:  " << (*PTPI)->getQuantity() << " piece(s)  " << (*PTPI)->getProduct()->getName() << endl;
			totalPrice += ((*PTPI)->getQuantity()) * ((*PTPI)->getProduct()->getPrice());
		}
		cout << "Total Price:  " << totalPrice << endl;
		if (!_order){
			if (isBonusUsed){
				cout << "Total Bonus:  " << customer->getBonus() << endl;
				cout << "Price for pay:" << totalPrice - (customer->getBonus()) << endl;
				cout << "You will earn " << (totalPrice - (customer->getBonus())) * 1 / 100 << "bonus" << endl;

			}
			else{
				cout << "You will earn " << totalPrice * 1 / 100 << "bonus" << endl;

			}
		}
		else{
			if (isBonusUsed){
				cout << "Total Bonus: " << customer->getBonus() << endl;
				sum = totalPrice - (customer->getBonus());
				cout << "Price for pay: " << sum << endl;
				cout << "You are going to earn " << sum * 1 / 100 << "bonus." << endl;
				customer->useBonus();
				customer->addBonus(sum * 1 / 100);
				cout << "You have earned " << sum * 1 / 100 << "bonus from this payment." << endl;
				_order = false;
			}
			else{
				cout << "You are going to earn " << totalPrice * 1 / 100 << "bonus from this payment." << endl;
				customer->addBonus(totalPrice * 1 / 100);
				cout << "You have earned " << totalPrice * 1 / 100 << "bonus from this payment." << endl;
				_order = false;
			}
		}
	}
	else
		cout << "There are any ProductToPurchase for Invoice" << endl;
}

list< ProductToPurchase * > ShoppingCart::getProductToPurchase(){ //!It gets products to purchased.
	return  productToPurchase;
}