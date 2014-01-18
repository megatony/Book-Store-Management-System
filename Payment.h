/**
* @file Payment.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Payment Header File
*
* Detailed description of file.
*/

#ifndef PAYMENT_H
#define PAYMENT_H

#include<string>
#include <iomanip>
#include <iostream>
using namespace std;

/*!o An abstract for payment methods
o Notable Attributes:
 amount–an amount to pay
o Possible Methods:
 performPayment() – authorize the payment
*/
class Payment {
public:
	// A constructor.
	//Payment();
	// A destructor.
	~Payment();
	virtual string getPaymentMethodName();
	double getAmount();
	void setAmount(double amount);
	//! authorize the payment
	virtual void performPayment() = 0;
private:
	//! an amount to pay
	double amount;
};

#endif