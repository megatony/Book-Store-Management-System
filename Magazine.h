/**
* @file Magazine.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Magazine Header File
*
* Detailed description of file.
*/

#include "Product.h"
#include<string>
#include <iomanip>
#include <iostream>
using namespace std;

/*!o An item for sale in the store
o Notable Attributes:
 issue – the issue of the magazine
 type – the type of the magazine (Actual, News, Sport, computer, technology, etc.)
*/
class Magazine :
	public Product
{
public:
	
	Magazine(int _Issue, string _type, int _ID, string _name, double _price);
	
	~Magazine();

	void printProperties();
	int getIssue();
	void setIssue(int Issue);
	string getType();
	void setType(string type);
private:
	//! the issue of the magazine
	int Issue;
	//! the type of the magazine (Actual, News, Sport, computer, technology, etc.)
	string type;
};




	
