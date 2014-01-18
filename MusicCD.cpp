/**
* @file MusicCD.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* Last change: Ahmet Faruk GÜNTÜRKÜN 10.01.2013 19:50 GMT+3
* @brief MusicCD C++ File
*
* Detailed description of file.
*/
#include "MusicCD.h"


MusicCD::MusicCD(string _singer, string _type, int _ID, string _name, double _price){//! A constructor
	Product::setID(_ID);
	Product::setName(_name);
	Product::setPrice(_price);
	singer = _singer;
	type = _type;
}

MusicCD::~MusicCD()
{//! A destructor.
}

void MusicCD::printProperties(){//! shows the all properties of the items
	Product::printProperties();
	cout << "Singer:" << MusicCD::getSinger() << endl;
	cout << "Type:" << MusicCD::getType() << endl;
}

string MusicCD::getSinger(){ //!It gets singer information of a music CD.
	return singer;
}
void MusicCD::setSinger(string singer){ //!It sets singer information of a music CD.
	MusicCD::singer = singer;
}
string MusicCD::getType(){ //!It gets music type of a music CD.
	return type;
}
void MusicCD::setType(string type){ //!It sets music type of a music CD.
	MusicCD::type = type;
}

/* Test Program for MusicCD Class 
void main(){
	MusicCD M1("Tarkan","POP", 2, "Kuzu Kuzu", 25);

	M1.printProperties();
}*/
