/**
* @file Check.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Check Header File
*
* Detailed description of file.
*/
#include "Payment.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

/*!o A payment method
o Notable Attributes:
 name– name of the check owner
 BankID –bank id of the check
*/
class Check :
	public Payment
{
public:
	
	Check(string _name, string _bankID);
	~Check();

	string getPaymentMethodName();

	void performPayment();
	string getName();
	void setName(string name);
	string getBankID();
	void setBankID(string bankID);

private:
	//! name of the check owner
	string name;
	//! bank id of the check
	string bankID;
};

