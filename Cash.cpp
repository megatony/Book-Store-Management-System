/**
* @file Cash.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Cash c++ File
* Last change: Author Ahmet Faruk GÜNTÜRKÜN 10.01.2014 19:52 GMT+3
* Detailed description of file.
*/
#include "Cash.h"

Cash::Cash()
{//! A constructor.
}


Cash::~Cash()
{//! A destructor.
}

string Cash::getPaymentMethodName(){ //!It gets payment method's name.
	return "Cash";
}
void Cash::performPayment(){ //!It performs payment by cash.
	cout << "pay by cash" << endl;
}

/* Test Program for Cash Class
void main(){
Cash B1;

B1.performPayment();

cout << B1.getPaymentMethodName() << endl;

}*/
