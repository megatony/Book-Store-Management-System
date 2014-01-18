/**
* @file Book.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* Last change: Ahmet Faruk GÜNTÜRKÜN 10.01.2013 19:52 GMT+3
* @brief Book C++ File
*
* Detailed description of file.
*/

#include "Book.h"


Book::Book(string _author, string _publisher, int _page, int _ID, string _name, double _price){//! A constructor
	Product::setID(_ID);
	Product::setName(_name);
	Product::setPrice(_price);
	author = _author;
	publisher = _publisher;
	page = _page;
}

Book::~Book(void)
{//! A destructor.
}

void Book::printProperties(){
	Product::printProperties();
	cout << "Author:" << Book::getAuthor() << endl;
	cout << "Publisher:" << Book::getPublisher() << endl;
	cout << "Page:" << Book::getPage() << endl;
}

string Book::getAuthor(){ //!It gets author of a book.
	return author;
}
void Book::setAuthor(string author){ //!It sets author of a book.
	Book::author = author;
}
string Book::getPublisher(){ //!It gets publisher of a book.
	return publisher;
}
void Book::setPublisher(string publisher){ //!It sets publisher of a book.
	Book::publisher = publisher;
}
int Book::getPage(){ //!It gets page number of a book.
	return page;
}
void Book::setPage(int page){ //!It sets page number of a book.
	Book::page = page;
}

/* Test Program for Book Class
void main(){
	Book B1("Daniel Defoe", "Yayinevi", 100, 1, "Robinson Crusoe", 50);

	B1.printProperties();
}
*/