/**
* @file MusicCD.h
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief MusicCD Header File
*
* Detailed description of file.
*/

#include "Product.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

/*!o An item for sale in the store
o Notable Attributes:
 singer – the name of the singer
 type – the type of the music (Romance, Hard Rock, Country, etc.)
*/
class MusicCD :
	public Product
{
public:
	
	MusicCD(string _singer, string _type, int _ID, string _name, double _price);

	~MusicCD();
	void printProperties();
	string getSinger();
	void setSinger(string singer);
	string getType();
	void setType(string type);
private:
	//! the name of the singer
	string singer;
	//! the  the type of the music (Romance, Hard Rock, Country, etc.)
	string type;
};









