/**
* @file Magazine.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* Last change: Ahmet Faruk GÜNTÜRKÜN 10.01.2013 19:50 GMT+3
* @brief Magazine C++ File
*
* Detailed description of file.
*/
#include "Magazine.h"


Magazine::Magazine(int _Issue, string _type, int _ID, string _name, double _price){//! A constructor
	Product::setID(_ID);
	Product::setName(_name);
	Product::setPrice(_price);
	Issue = _Issue;
	type = _type;
}

Magazine::~Magazine()
{//! A destructor.

}

void Magazine::printProperties(){//!shows the all properties of the items
	Product::printProperties();
	cout << "Issue:" << Magazine::getIssue() << endl;
	cout << "Type:" << Magazine::getType() << endl;
}
int Magazine::getIssue(){ //!It gets issue of a magazine.
	return Issue;
}
void Magazine::setIssue(int Issue){ //!It sets issue of a magazine.
	Magazine::Issue = Issue;
}
string Magazine::getType(){ //!It gets type of a magazine.
	return type;
}
void Magazine::setType(string type){ //!It sets type of a magazine.
	Magazine::type = type;
}


/* Test Program for Magazine Class 
void main(){
	Magazine B1(250, "Geographi", 1, "National Geographic", 50);

	B1.printProperties();
}*/
