/**
* @file Payment.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Payment C++ File
* Last change: Ahmet Faruk GÜNTÜRKÜN 10.01.2013 19:53 GMT+3
* Detailed description of file.
*/
#include "Payment.h"
#include "CreditCard.h"
#include "Check.h"
#include "Cash.h"

Payment::~Payment(){
	//! A destructor.
}

string Payment::getPaymentMethodName(){//!It gets payment method name. 
	return "Payment"; } 
double Payment::getAmount(){//!It gets amount of a payment.
	return amount;
}
void Payment::setAmount(double amount){ //!It sets amount of a payment.
	Payment::amount = amount;
}


/* Test Program for Payment Class 
void main(){
	Payment *P1, *P2, *P3;
	
	P1 = new CreditCard(1111222334, "MasterCard", "January 2018");
	P2 = new Cash();
	P3 = new Check("Bank Name", " Bank ID");

	cout << "P1. payment method name is :" << P1->getPaymentMethodName() << endl;
	cout << "P2. payment method name is :" << P2->getPaymentMethodName() << endl;
	cout << "P3. payment method name is :" << P3->getPaymentMethodName() << endl;
	
}*/