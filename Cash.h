/**
* @file Cash.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Cash Header File
*
* Detailed description of file.
*/
#include "Payment.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

/*!o A payment method
*/
class Cash :
	public Payment
{
public:
	
	Cash();
	
	~Cash();
	string getPaymentMethodName();
	void performPayment();
};

