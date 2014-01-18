/**
* @file Control.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadýr Akýn Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief Control c++ File
* Last change: Author Ahmet Faruk GÜNTÜRKÜN 10.01.2014 19:48 GMT+3
* Detailed description of file.
*/
#include "Control.h"

string Control::true_email(string &_email) {
	/*! Check that the string contains at least one '@' and a '.'
	after it. This will have lots of false negatives (but no
	false negative), like "a@b@c.com" or "toto@com.". */
	int atNumber=0;
	size_t at_index = _email.find_first_of('@', 0);
	if (at_index != std::string::npos && _email.find_first_of('.', at_index) != std::string::npos)
	{
		for (int i = 0; i < _email.size();i++)
		if (_email[i] == '@')
			atNumber++;
		if (atNumber==1)
		return _email;
		else{
			cout << "You couldn't use more than 1 '@' character, please try again." << endl;
			string __email;
			cin >> __email;
			return true_email(__email);
		}
	}
	else{
		cout << "Wrong e-mail address, please try again." << endl;
		string __email;
		cin >> __email;
		return true_email(__email);
	}

}

string Control::true_number(string &number)
{/*! Check that the string is number or not */
	static const string AllowedChars = "0123456789";
	for (auto numberChar = number.begin();
		numberChar != number.end(); ++numberChar)

	if (AllowedChars.end() == std::find(
		AllowedChars.begin(), AllowedChars.end(), *numberChar))
	{
		cout << "Wrong number, please try again." << endl;
		string __number;
		cin >> __number;
		return true_number(__number);
	}
	return number;
}

/* Test Program for Control Class
void main(){

	Control C1;
	string b1 = "vadsl@gmail.com";
	string b2 = "vadsl.gmail.com";
	string b3 = "vadsl@gmail@com";
	
	b1 = C1.true_email(b1);
	cout << "b1: " << b1 << endl;
	b2 = C1.true_email(b2);
	cout << "b2: " << b2 << endl;
	b3 = C1.true_email(b3);
	cout << "b3: " << b3 << endl;

	
	} */