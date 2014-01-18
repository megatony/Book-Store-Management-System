/**
* @file CreditCard.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief CreditCard c++ File
* Last change: Author Ahmet Faruk GÜNTÜRKÜN 10.01.2014 19:51 GMT+3
* Detailed description of file.
*/
#include "CreditCard.h"


CreditCard::CreditCard(long _number, string _type, string _expDate){//! A constructor.
	number = _number;
	type = _type;
	expDate = _expDate;
}

CreditCard::~CreditCard()
{
	//! A destructor.
}

string CreditCard::getPaymentMethodName(){ //!It gets payment method's name.
	return "Credit Card";
}

long CreditCard::getNumber(){ //!It gets number of a credit card.
	return number;
}
void CreditCard::setNumber(long number){ //!It sets number of a credit card.
	CreditCard::number = number;
}
string CreditCard::getType(){ //!It gets type of a credit card.
	return type;
}
void CreditCard::setType(string type){ //!It sets type of a credit card.
	CreditCard::type = type;
}
string CreditCard::getExpDate(){ //!It gets expiration date of a credit card.
	return expDate;
}
void CreditCard::setExpDate(string expDate){ //!It sets expiration date of a credit card.
	CreditCard::expDate = expDate;
}
void CreditCard::performPayment(){ //!It performs payment by credit card.
	cout << "pay by credit card" << endl;
}

/* Test Program for CreditCard Class 
void main(){

	CreditCard CC1(1111222334, "MasterCard", "January 2018");

	cout << "Number :" <<CC1.getNumber() << endl;
	cout << "Type :" << CC1.getType() << endl;
	cout << "ExpDate :" << CC1.getExpDate() << endl;
	cout << "Paymant Method :" << CC1.getPaymentMethodName() << endl;
	
} */