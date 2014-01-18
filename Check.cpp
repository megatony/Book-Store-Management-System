/**
* @file Check.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Check c++ File
* Last change: Author Ahmet Faruk GÜNTÜRKÜN 10.01.2014 19:48 GMT+3
* Detailed description of file.
*/
#include "Check.h"



Check::Check(string _name, string _bankID){//! A constructor.
	name = _name;
	bankID = _bankID;
}

Check::~Check()
{//! A destructor.
}

string Check::getPaymentMethodName(){ //!It gets payment method's name.
	return "Check";
}

void Check::performPayment(){ //!It performs payment by check.
	cout << "pay by check" << endl;
}
string Check::getName(){ //!It gets name of a check owner.
	return name;
}
void Check::setName(string name){ //!It sets name of a check owner.
	Check::name = name;
}
string Check::getBankID(){ //!It gets Bank ID of a check.
	return bankID;
}
void Check::setBankID(string bankID){ //!It sets Bank ID of a check.
	Check::bankID = bankID;
}


/* Test Program for Check Class 
void main(){

Check C1("Bank Name"," Bank ID");

C1.performPayment();

cout << C1.getPaymentMethodName() << endl;

cout << "Bank id : " << C1.getBankID() << " --- Name: " << C1.getName() << endl;
}*/