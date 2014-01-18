/**
* @file Customer.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Customer Header File
* Last change: Bahadýr Akýn Akgül 09.01.2013 17:59 GMT+3
* Detailed description of file.
*/
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;


/*! o A customer!
o Notable Attributes:
 name - the name of the customer
 customerID – unique id for each customer
 bonus – each customer earns bonus as 1% of the amount of each shopping. Then,
he/she may use his bonus next shopping or save it.
 Username and password – a customer may shop after entering his username and
password.
*/
class Customer
{
public:

	Customer(double bonus , string name, string address, string phone, string email, string username, string password);
	Customer();
	~Customer();

	void sendBill();
	long getCustomerID();
	string getName();
	void setName(string name);
	string getAddress();
	void setAddress(string address);
	string getPhone();
	void setPhone(string phone);
	double getBonus();
	void setBonus(double bonus);
	string getEmail();
	void setEmail(string email);
	string getUsername();
	void setUsername(string username);
	string getPassword();
	void setPassword(string password);
	bool checkAccount(string username, string password);
	void addBonus(double bonus);
	void useBonus();

private:
	static long customerID;
	double bonus=0;
	string name, address, phone, email, username, password;
};


#endif