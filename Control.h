/**
* @file Control.h
* @Author Ahmet Faruk G�NT�RK�N (vadsl05@gmail.com)
* @Author Bahad�r Ak�n Akg�l (bahadir@akinakgul.com)
* @date January, 2014
	* @brief Control Header File
* Detailed description of file.
*/
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

#ifndef CONTROL_H
#define CONTROL_H

/*!This class control mail and number...
*/
class Control{
public:
	static string true_email(string &_email);

	static string true_number(string &number);
};
#endif