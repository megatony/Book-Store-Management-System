/**
* @file CreditCard.h
* @Author Ahmet Faruk G�NT�RK�N (vadsl05@gmail.com)
* @Author Bahad�r Ak�n Akg�l (bahadir@akinakgul.com)
* @date January, 2014
* @brief CreditCard Header File
* Last change: Bahad�r Ak�n Akg�l 09.01.2013 17:56 GMT+3
* Detailed description of file.
*/
#include "Payment.h"
#include<string>
#include <iomanip>
#include <iostream>
using namespace std;


/*! o A payment method
	o Notable Attributes :
 number� credit card number
	 type � type of the credit card(master / visa)
	 expDate � expiration date of the card
*/
class CreditCard :
	public Payment
{
public:
	
	CreditCard(long _number, string _type, string _expDate);
	
	~CreditCard();
	
	string getPaymentMethodName();

	long getNumber();
	void setNumber(long number);
	string getType();
	void setType(string type);
	string getExpDate();
	void setExpDate(string expDate);
	void performPayment();

private:
	//! credit card number
	long number;
	//! type of the credit card (master/visa)
	string type;
	//! expiration date of the card
	string expDate;
};

