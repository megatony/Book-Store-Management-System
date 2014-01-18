/**
* @file Book.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Book Header File
*
* Detailed description of file.
*/

#include "Product.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

/*!o An item for sale in a store
o Notable Attributes:
 author – the author of the book
 publisher – the publisher of the book
 page – the page number of the book
*/
class Book :
	public Product
{
public:
	
	Book(string _author, string _publisher, int _page, int _ID, string _name, double _price);
	
	~Book(void);
	void printProperties();
	string getAuthor();
	void setAuthor(string author);
	string getPublisher();
	void setPublisher(string publisher);
	int getPage();
	void setPage(int page);
	
private:
	//! the author of the book
	string author;
	//! the publisher of the book
	string publisher;
	//! the page number of the book
	int page;
};

