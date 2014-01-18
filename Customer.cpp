/**
* @file Customer.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Customer C++
* Last change: Ahmet Faruk GÜNTÜRKÜN 11.01.2013 18:01 GMT+3
* Detailed description of file.
*/
#include "Customer.h"


Customer::Customer( double bonus, string name, string address, string phone, string email, string username, string password){//! A constructor.
	customerID++;
	Customer::bonus = bonus;
	Customer::name = name;
	Customer::address = address;
	Customer::phone = phone;
	Customer::email = email;
	Customer::username = username;
	Customer::password = password;
}
Customer::Customer(){//! A default constructor.
	customerID++;
}

Customer::~Customer(){
	//! A destructor.
	customerID--;
}

void Customer::sendBill(){
	//!It sends customer's bill to printer.
	cout << "Your bill is printed." << endl;
}
long Customer::getCustomerID(){
	//!Gets a customer's ID.
	return customerID;
}
string Customer::getName(){
	//!Gets name of a customer.
	return name;
}
void Customer::setName(string name){
	//!It sets name of a customer.
	Customer::name = name;
}
string Customer::getAddress() {
	//!It gets address of a customer.
	return address;
}
void Customer::setAddress(string address) {
	//!It sets address of a customer.
	Customer::address = address;

}
string Customer::getPhone(){
	//!It gets phone number of a customer.
	return phone;
}
void Customer::setPhone(string phone){
	//!It sets a phone number for a customer.
	Customer::phone = phone;
}
double Customer::getBonus(){
	//!It gets bonus value of a customer.
	return bonus;
}
void Customer::setBonus(double bonus){
	//!It sets bonus value of a customer.
	Customer::bonus = bonus;

}
string Customer::getEmail(){
	//!It gets e-mail of a customer.
	return email;
}
void Customer::setEmail(string email){
	//!It sets a e-mail for a customer.
	Customer::email = email;
}
string Customer::getUsername(){
	//!It gets username of a customer.
	cout << username << endl;
	return username;
}
void Customer::setUsername(string username){
	//!It sets a username for a customer.
	Customer::username = username;
}
string Customer::getPassword(){
	//!It gets password of a customer.

	return password;
}
void Customer::setPassword(string password){
	//!It sets a password of a customer.
	Customer::password = password;
}
bool Customer::checkAccount(string username, string password){
	//!Its checks is user's account information.
	if (username == Customer::username && password == Customer::password)
	{
		return true;
	}
	else
	//	cout << "Wrong username or password" << endl;
	return false;
}
void Customer::addBonus(double bonus){
	//!Add bonus value to user's account.

	Customer::bonus += bonus;
}
void Customer::useBonus(){ //!It use a customer's bonusses for a payment.

	bonus = 0;
}

long Customer::customerID = 1;