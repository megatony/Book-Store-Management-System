/*! \mainpage Online Book Store  
*<IMG SRC="images/bookstore/signbot.gif" ALT="Book Store" WIDTH=1000 HEIGHT=160> \tableofcontents
* 
* \section Starting Get Starting
*
* This is the UML Diagram of Project
*<IMG SRC="images/UML%20Diagram.png" ALT="UML Diagram of Project" WIDTH=1436 HEIGHT=777>
*
* \section install Class Tests
*
* \subsection Book Book Class Tests
*<IMG SRC="images/Book.png" ALT="Book Class Tests" WIDTH=678 HEIGHT=430>
*
* \subsection Cash Cash Class Tests
*<IMG SRC="images/Cash.png" ALT="Cash Class Tests" WIDTH=678 HEIGHT=494>
*
* \subsection Check Check Class Tests
*<IMG SRC="images/Check.png" ALT="Check Class Tests" WIDTH=683 HEIGHT=523>
*
* \subsection Control Control Class Tests
*<IMG SRC="images/Control.png" ALT="Control Class Tests" WIDTH=947 HEIGHT=343>
*
* \subsection Credit Credit Card Class Tests
*<IMG SRC="images/CreditCard.png" ALT="Credit Card Class Tests" WIDTH=1185 HEIGHT=344>
*
* \subsection Magazine Magazine Class Tests
*<IMG SRC="images/Magazine.png" ALT="Magazine Class Tests" WIDTH=1180 HEIGHT=355>
*
* \subsection MusicCD MusicCD Class Tests
*<IMG SRC="images/MusicCD.png" ALT="MusicCD Class Tests" WIDTH=1119 HEIGHT=343>
*
* \subsection Payment Payment Class Tests
*<IMG SRC="images/Payment.png" ALT="Payment Class Tests" WIDTH=1294 HEIGHT=343>
*
* \subsection Product Product Class Tests
*<IMG SRC="images/ProductToPurchase.png" ALT="Product Class Tests" WIDTH=1289 HEIGHT=332>
*
* \section contack Contack US
* Please Feel Free to Contack Us ...
*\subsection afgun Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
*\subsection akin Bahadır Akın Akgül (bahadir@akinakgul.com)
*<IMG SRC="images/akin.jpg" ALT="Akin Resim" WIDTH=571 HEIGHT=571>
*
*/



/*
         <div class="header">
  <div class="headertitle">
<div class="title">Online <a class="el" href="class_book.html">Book</a> Store </p>
    <div class="toc">
        <h3>Table of Contents</h3>
        <ul>
            <li class="level1"><a href="#Starting">Get Starting</a></li>
            <li class="level1">
                <a href="#install">Class Tests</a><ul>
                    <li class="level2"><a href="#Book">Book Class Tests</a></li>
                    <li class="level2"><a href="#Cash">Cash Class Tests</a></li>
                    <li class="level2"><a href="#Check">Check Class Tests</a></li>
                    <li class="level2"><a href="#Control">Control Class Tests</a></li>
                    <li class="level2"><a href="#Credit">Credit Card Class Tests</a></li>
                    <li class="level2"><a href="#Magazine">Magazine Class Tests</a></li>
                    <li class="level2"><a href="#MusicCD">MusicCD Class Tests</a></li>
                    <li class="level2"><a href="#Payment">Payment Class Tests</a></li>
                    <li class="level2"><a href="#Product">Product Class Tests</a></li>
                </ul>
            </li>
            <li class="level1">
                <a href="#contack">Contack US</a><ul>
                    <li class="level2"><a href="#afgun">Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)</a></li>
                    <li class="level2"><a href="#akin">Bahadır Akın Akgül (bahadir@akinakgul.com)</a></li>
                </ul>
            </li>
        </ul>
    </div>

</div>
 </div>  </div>
</div><!--header-->

*/

/**
* @file main.cpp
* @Author Ahmet Faruk GÜNTÜRKÜN (vadsl05@gmail.com)
* @Author Bahadır Akın Akgül (bahadir@akinakgul.com)
* @date January, 2014
* @brief main C++ File
* Last change: Bahadir Akin Akgul 10.01.2014 03:17 GMT+3
* Detailed description of file.
*/
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "Control.h"
#include "Book.h"
#include "Cash.h"
#include "Check.h"
#include "CreditCard.h"
#include "Customer.h"
#include "Magazine.h"
#include "MusicCD.h"
#include "Payment.h"
#include "Product.h"
#include "ProductToPurchase.h"
#include "ShoppingCart.h"

#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;
#pragma region typedefs
typedef list<Book*> bookList;
typedef list<Book*>::iterator bookIter;
typedef list<Magazine*> magazineList;
typedef list<Magazine*>::iterator magazineIter;
typedef list<MusicCD*> musiccdList;
typedef list<MusicCD*>::iterator musiccdIter;
typedef list<Customer*> customerList;
typedef list<Customer*>::iterator customerIter;
typedef list<Product*> productList;
typedef list<Product*>::iterator productIter;
typedef list<ShoppingCart*> shoppingCartList;
typedef list<ShoppingCart*>::iterator shoppingCartIter;
typedef vector<ProductToPurchase*> productToPurchaseVector;
typedef vector<ProductToPurchase*>::iterator productToPurchaseVectorIter;
int selector;
string _selector;
#pragma endregion

#pragma region menus


void mainMenu(){
	cout << "Main menu: " << endl;
	cout << "1. Customer" << endl;
	cout << "2. Item" << endl;
	cout << "3. Shopping" << endl;
	cout << "4. Quit" << endl;
	cout << "Choose one: ";
	cin >> _selector;
	selector = atoi(Control::true_number(_selector).c_str());
}
void customerMenu(){
	cout << "Customer Menu " << endl;
	cout << "1. Add a customer item to system" << endl;
	cout << "2. Show the customers in the system" << endl;
	cout << "3. Back" << endl;
	cout << "Choose one: ";
	cin >> _selector;
	selector = atoi(Control::true_number(_selector).c_str());
}

void itemMenu(){
	cout << "Item Menu " << endl;
	cout << "1. Add a item to system." << endl;
	cout << "2. Show the items in the system" << endl;
	cout << "3. Back" << endl;
	cout << "Choose one: ";
	cin >> _selector;
	selector = atoi(Control::true_number(_selector).c_str());
}
void itemAddMenu(){
	cout << "Item Add Menu " << endl;
	cout << "1. Book" << endl;
	cout << "2. Magazine" << endl;
	cout << "3. Music CD" << endl;
	cout << "4. Main Menu" << endl;
	cout << "Choose one: ";
	cin >> _selector;
	selector = atoi(Control::true_number(_selector).c_str());
}

void shoppingMenu(){
	cout << "Shopping Menu " << endl;
	cout << "1. Login" << endl;
	cout << "2. Add Product" << endl;
	cout << "3. Remove Product" << endl;
	cout << "4. List All Products" << endl;
	cout << "5. List Shopping Cart" << endl;
	cout << "6. Show Bonus" << endl;
	cout << "7. Use Bonus" << endl;
	cout << "8. Place Order" << endl;
	cout << "9. Cancel Order" << endl;
	cout << "10. Show Invoice" << endl;
	cout << "11. Quit" << endl;
	cout << "12. Main Menu" << endl;
	cout << "Choose one: ";
	cin >> _selector;
	selector = atoi(Control::true_number(_selector).c_str());
}
#pragma endregion


void main(){

#pragma region Awake
	customerList cL;
	customerIter cI;
	Customer *loggedCustomer;
	loggedCustomer = new Customer();
	bool _logged=false;
//	cI = cL.begin();

//	musiccdList mcL;
//	musiccdIter mcI;
//	mcI = mcL.begin();
	string _singer;

//	magazineList mL;
//	magazineIter mI;
//	mI = mL.begin();
	int _Issue;
	string _type;

//	bookList bL;
//	bookIter bI;
//	bI = bL.begin();
	string _author;
	string _publisher;
	int _page;
	string __page;

	productList pL;
	productIter pI;
	productIter pI2;
	productToPurchaseVector pV;
	productToPurchaseVectorIter pvI;
	ProductToPurchaseIter PTPI2;
	list< ProductToPurchase * > productToPurchase;

	shoppingCartList scL;
	shoppingCartIter scI;
	shoppingCartIter scI2;
	shoppingCartIter scI3;
	
	

	int _ID; double _price;
	int i = 1;
	string _name, _phone, _email, _username, _password, __price,__ID;
	string _address, _address1, _address2;
	string _haveAccount;
	int _itemNumber;
	int _quantity;

	cout << "888888b.                  888         .d8888b. 888                           " << endl;
	cout << "888  x88b                 888        d88P  Y88b888" << endl;
	cout << "888  .88P                 888        Y88b.     888                           " << endl;
	cout << "8888888K.  .d88b.  .d88b. 888  888    xY888b.  888888.d88b. 888d888.d88b." << endl;
	cout << "888  xY88bd88xx88bd88xx88b888 .88P       xY88b.888   d88xx88b888Px  d8P  Y8b" << endl;
	cout << "888    888888  888888  888888888K          x888888   888  888888    88888888" << endl;
	cout << "888   d88PY88..88PY88..88P888 x88b   Y88b  d88PY88b.Y88..88P888    Y8b." << endl;
	cout << "8888888Px  xY88Px  xY88Px 888  888    xY8888Px  xY888 xY88Px 888     xY8888  " << endl;
	cout << endl;
	cout << endl;
	cout << " Welcome to the online book store, you could buy Book, Magazine or MusicCD..." << endl;
	cout << endl;
	cout << endl;
#pragma endregion
#pragma region Start
	Customer *C1,*C2,*C3,*C4,*C5;
	C1 = new Customer(250, "isim", "adres", "123789456", "e@mail.com", "username", "password");
	C2 = new Customer(1000,"Ahmet Faruk","Orman İşletme Müdüdürlügü","5131474","vadsl05@gmail.com", "afgun","1");
	C3 = new Customer(1000,"Akin Akgul","Eskisehir","2272567","bahadir@akinakgul.com","akin","2");
	C4 = new Customer(0,"Ramazan Altintas","Odunpazari","1238903","altintas@hotmail.com","ramco","3");
	C5 = new Customer(100,"Test Account","Test Adress","123456789","test@mail.com","test","test");
	cL.push_front(C1);
	cL.push_front(C2);
	cL.push_front(C3);
	cL.push_front(C4);
	cL.push_front(C5);
	scL.push_front(new ShoppingCart(C1));
	scL.push_front(new ShoppingCart(C2));
	scL.push_front(new ShoppingCart(C3));
	scL.push_front(new ShoppingCart(C4));
	scL.push_front(new ShoppingCart(C5));

	pL.push_front(new Book("Daniel Defoe", "Yayinevi", 100, 1, "Robinson Crusoe", 50));
	pL.push_front(new Book("Tolstoy", "Russkii Vestnik", 1225, 2, "war and peace", 100));
	pL.push_front(new Book("Fyodor Dostoyevski", "Rus Habercisi", 1000, 3, "crime and punishment", 75));

	pL.push_front(new Magazine(250, "Geographi", 4, "National Geographic", 50));
	pL.push_front(new Magazine(100, "Science", 5, "Atlas", 75));
	pL.push_front(new Magazine(500, "Computer", 6, "PCNet", 25));


	pL.push_front(new MusicCD("Tarkan", "POP", 7, "Kuzu Kuzu", 25));
	pL.push_front(new MusicCD("Everything But the Girl", "Romantic", 8, "And I Miss youu", 100));
	pL.push_front(new MusicCD("Eiffel 65", "Single", 9, "Blue", 50));


	/*Book* B1;
	B1 = new Book("Daniel Defoe", "Yayinevi", 100, 10, "Robinson Crusoe", 50);
	B1->printProperties();*/

	#pragma endregion
#pragma region Running
mainMenu:
		mainMenu();
		if (selector == 1){
		customerMenu:
			customerMenu();
			switch (selector){
			case 1:
			accountRegister :
				cout << endl;
				cout << "Add a customer to system" << endl;
				cL.push_front(new Customer);
				cI = cL.begin();
				cout << endl;
				cout << "Name of customer: " << endl;
				cin >> _name;
				(*cI)->setName(_name);
				cout << endl;
				cout << "Address of customer: " << endl;
				cin >> _address1;
				getline(cin, _address2);
				_address = _address1 + _address2;
				(*cI)->setAddress(_address);
				_address2 = "";
				cout << endl;
				cout << "E-mail of customer: " << endl;
				
				cin >> _email;
				_email = Control::true_email(_email);

				(*cI)->setEmail(_email);
				
				cout << endl;
				cout << "Phone number of customer: " << endl;
				cin >> _phone;
				_phone = Control::true_number(_phone);
				(*cI)->setPhone(_phone);
				cout << endl;
				cout << "Username of customer: " << endl;
				cin >> _username;
				(*cI)->setUsername(_username);
				cout << endl;
				cout << "Password of customer: " << endl;
				cin >> _password;
				(*cI)->setPassword(_password);
				
				scL.push_front(new ShoppingCart(*cI));
				cout << endl;
				cout << "You have succesfully created an account." << endl;
				cout << endl;
				goto mainMenu;
				break;
			case 2:
				cout << endl;
				cout << "Customer list in the system: " << endl;
				cout << "-------------------------------" << endl;
				cout << endl;
				for (i=1, cI = cL.begin(); cI != cL.end(); cI++, i++){
					cout << i << " . " << (*cI)->getName() << endl;
				}
				cout << "-------------------------------" << endl;
				cout << endl;
				goto mainMenu;
				break;
			case 3: cout << "Back" << endl;
				cout << endl;
				goto mainMenu;
				break;
			default:
				cout << "Wrong selection, please try it again." << endl;
				cin >> selector;
				
			}
		}
		 else if (selector == 2){
		 itemMenu:
//		 Product* b;
		 cout << endl;
		 itemMenu();
		 switch (selector){
		 case 1: 
			 cout << endl;
			 cout << "Add a product to system" << endl;
			 itemAddMenu();
			 switch (selector)
			 {
			 case 1:
			 book :
				 cout << endl;
				 cout << "Login information of book" << endl;
			  bookLoginID:
				 cout << endl;
				  cout << "ID : " << endl;
				  cin >> __ID;
				  _ID = atoi(Control::true_number(__ID).c_str());
				  for (i = 1, pI = pL.begin(); pI != pL.end(); pI++, i++){
					  if (_ID == (*pI)->getID()){
						  cout << "This ID number in use, please use another ID.";
						  goto bookLoginID;
					  }
				  }
				  cout << endl;
				  cout << "Name : " << endl;
				  cin >> _name;
				  cout << endl;
				  cout << "Price : " << endl;
				  
				  cin >>__price;
				  _price = atof(Control::true_number(__price).c_str());
				  cout << endl;
				  cout << "Author : " << endl;
				  cin >> _author;
				  cout << endl;
				  cout << "Publisher : " << endl;
				  cin >> _publisher;
				  cout << endl;
				  cout << "Page : " << endl;
				  
				  cin >> __page;
				  _page = atoi(Control::true_number(__page).c_str());
				  pL.push_front(new Book(_author, _publisher, _page, _ID, _name, _price));
				  cout << endl;
				  cout << "Book has been added." << endl;
				  cout << endl;
				  goto mainMenu;
				  break;
			 case 2:
			 magazine :
				 cout << endl;
				 cout << "Please enter magazine information: " << endl;
				 cout << endl;
				  magazineLoginID:

					  cout << "ID : " << endl;
					  cin >> __ID;
					  _ID = atoi(Control::true_number(__ID).c_str());
					  for (i = 1, pI = pL.begin(); pI != pL.end(); pI++, i++){
						  if (_ID == (*pI)->getID()){
							  cout << "This ID number in use, please use another ID.";
							  goto magazineLoginID;
						  }
					  }
					  cout << endl;
					  cout << "Name : " << endl;
					  cin >> _name;
					  cout << endl;
					  cout << "Price : " << endl;
					  cin >> __price;
					  _price = atof(Control::true_number(__price).c_str());
					  cout << endl;
					  cout << "Issue : " << endl;
					  cin >> _Issue;
					  cout << endl;
					  cout << "Type : " << endl;
					  cin >> _type;
					  cout << endl;

					  
					  pL.push_front( new Magazine(_Issue, _type, _ID, _name, _price));
					  cout << "Magazine has been added." << endl;
					  cout << endl;
					  goto mainMenu;
					  break;
			 case 3:
			 MusicCD :
				 cout << endl;
				 cout << "Please enter information of Music CD" << endl;
				 musicCDLoginID:
				 cout << endl;
				 cin >> __ID;
				 _ID = atoi(Control::true_number(__ID).c_str());
					 for (i = 1, pI = pL.begin(); pI != pL.end(); pI++, i++){
						 if (_ID == (*pI)->getID()){
							 cout << "This ID number in use, please use another ID.";
							 goto musicCDLoginID;
						 }
					 }
					 cout << endl;
					 cout << "Name : " << endl;
					 cin >> _name;
					 cout << endl;
					 cout << "Price : " << endl;
					 cin >> __price;
					 _price = atof(Control::true_number(__price).c_str());
					 cout << "Singer : " << endl;
					 cout << endl;
					 cin >> _singer;
					 cout << "Type : " << endl;
					 cin >> _type;
					 cout << endl;

					
					 pL.push_front(new MusicCD(_singer, _type, _ID, _name, _price));
					 cout << endl;
				 cout << "Music CD has been added." << endl;
				 cout << endl;
				 goto mainMenu;
				 break;
			 case 4:
				 goto mainMenu;
				 break;
			 default:
				 cout << "Wrong selection, please try it again." << endl;
				 cin >> selector;				 
				 break;
			 }
			 
		 break;
		 case 2: 
			 cout << "Product list in the system:" << endl;
			 cout << "-------------------------------" << endl;
			 if (!pL.empty())
			 for (i = 1, pI = pL.begin(); pI != pL.end(); pI++, i++){
				 cout << i << " . " << (*pI)->getName() << endl;
				}
			 else
				 cout << endl;
				 cout << "-------------------------------" << endl;
				 cout << endl;
			 goto mainMenu;
		 break;
		 case 3:
			 cout << "Back" << endl;
			 goto mainMenu;
		 break;
		 default:
			 cout << "Wrong selection, please try it again." << endl;
			 cin >> selector;
		 }
		 }
			
		 else if (selector == 3) {
		 shoppingMenu:
			 string _username;
			 string _password;
//			 bool _bool;
		 shoppingMenu();
		 switch (selector){
		 case 1:
		 accountLogin :
		 cout << "Have you registered before this system? (y/n)" << endl;
		 cin >> _haveAccount;
		 if (_haveAccount == "y" || _haveAccount == "Y"){
		 accountLogin2:
			 
			 cout << "Please enter your username:" << endl;
			 cin >> _username;
			 cout << "Please enter your password:" << endl;
			 cin >> _password;



			 for (cI = cL.begin(); cI != cL.end(); cI++){
				 if ((*cI)->checkAccount(_username, _password))
				 {
					 cout << endl;
					 cout << "Welcome " << (*cI)->getName() << endl;
					 cout << endl;
					 loggedCustomer = *cI;
					 _logged = true;
					 goto shoppingMenu;
				 }
			 }
				 if(!_logged){
					 cout << endl;
					 cout << "Wrong username or password! Press (t) for try again." << endl << "If you want to register press (r)" << endl;
					 cout << endl;
					 _logged = false;
					 cin >> _selector;
					 if (_selector == "r" || _selector == "R")
					 {
						 goto accountRegister;
					 }
					 else if (_selector == "t" || _selector == "T"){
						 goto accountLogin2;
					 }
					 else
						 goto accountLogin2;
				 }
			 
		 }
		 
		 else
			 goto accountRegister;
		 break;
		 case 2:
			 //Add Product
			 if (_logged){
				 cout << endl;
				 cout << "Show the all products in the system" << endl;
				 cout << "-------------------------------" << endl;
				 cout << endl;
				 for (i = 1, pI = pL.begin(); pI != pL.end(); pI++, i++){
					 cout << i << " . " << (*pI)->getName() << endl;
				//	 pV.push_back(new ProductToPurchase((*pI), 1));
				}
				 cout << "-------------------------------" << endl;
				 if (!pL.empty()){
					 cout << "Please enter a number that belongs to a product in product list." << endl;
					 cin >> _itemNumber;
					 cout << endl;
					 cout << "Quantity :" << endl;
					 cin >> _quantity;



					 for (scI = scL.begin(); scI != scL.end(); scI++)
						 if ((*scI)->getCustomer() == loggedCustomer){
						// pV[_itemNumber - 1]->setQuantity(_quantity);
						//	 (*scI)->addProduct(pV[_itemNumber - 1]);
							 pI = pL.begin();
							 if (_itemNumber==1)
							 pI = pL.begin();
							 else if (_itemNumber > 1)
								 for (i = 1; i < _itemNumber; i++)
									 pI++;
							 else
							 {
								 cout << "you couldn't join less than 1" << endl;
							 }
						 (*scI)->addProduct(new ProductToPurchase(*pI, _quantity));
						}
					 goto shoppingMenu;
				 }
				 else{
					 cout << endl;
					 cout << "-------------------------------" << endl;
					 cout << endl;
					 goto mainMenu;
				 }
			 }
			 else
			 {
				 cout << endl;
				 cout << "Please login to system." << endl;
				 cout << endl;
				 goto accountLogin;
			 }
		 
		 break;
		 case 3:
		 //Delete product
			 
			 if (_logged){
				 for (scI = scL.begin(); scI != scL.end(); scI++)
					 if ((*scI)->getCustomer() == loggedCustomer){
						 (*scI)->printProducts();
					//	 (*scI)->removeProduct(*((*scI)->getProductToPurchase().begin()));
			}	 
					 for (scI2 = scL.begin(); scI2 != scL.end(); scI2++)
						 if ((*scI2)->getCustomer() == loggedCustomer){
							 if (!((*scI2)->getProductToPurchase().empty())){
								 cout << endl;
								 cout << "Please enter the number that belongs to the product and you want to delete it." << endl;
								 cout << endl;
								 cin >> _itemNumber;
								 cout << "Quantity :" << endl;
								 cin >> _quantity;
							 }
							 else{
								 cout << "Add Sometihng to shopping cart" << endl;
								 goto shoppingMenu;
							 }
						 }
						 

						 for (scI3 = scL.begin(); scI3 != scL.end(); scI3++)
						 if ((*scI3)->getCustomer() == loggedCustomer){
							
							 productToPurchase = (*scI3)->getProductToPurchase();
							
							 PTPI2 = productToPurchase.begin();
							 if (_itemNumber == 1){
								
								 for (pI = pL.begin(); pI != pL.end(); pI++){
									 if ((*PTPI2)->getProduct()->getID() == (*pI)->getID())
										 pI2 = pI;
								 }
								
							 }
							 else if (_itemNumber > 1){
								 for (i = 1; i < _itemNumber; i++) {
									 
									 PTPI2++;
									 for (pI = pL.begin(); pI != pL.end(); pI++)
									 if ((*PTPI2)->getProduct()->getID() == (*pI)->getID())
										 pI2 = pI;
									
								 }
							 }
							 else
							 {
								 cout << "you couldn't join less than 1" << endl;
							 }
							 
							 (*scI3)->removeProduct(new ProductToPurchase(*pI2, _quantity));
							
						 } 

						

						 
						 goto shoppingMenu;



			 }
			 else
			 {
				 cout << endl;
				 cout << "Please login to system.";
				 cout << endl;
				 goto accountLogin;
			 }
		 break;
		 case 4:
		 //Show all products
			 if (_logged){
				 cout << endl;
				 cout << "List of all products in the system: " << endl;
				 cout << endl;
				 for (i = 1, pI = pL.begin(); pI != pL.end(); pI++, i++){
					 cout << i << ". product : " << (*pI)->getName() << endl;
					
				 }
				 goto shoppingMenu;
				}
			 else
			 {
				 cout << endl;
				 cout << "Please login to system." << endl;
				 cout << endl;
				 goto accountLogin;
			 }

		 break;
		 case 5:
		 //List shopping cart
			 if (_logged){
				 for (scI = scL.begin(); scI != scL.end(); scI++)
					 if ((*scI)->getCustomer() == loggedCustomer){
						 (*scI)->printProducts();
					 }
					 goto shoppingMenu;
			 }
			 else
			 {
				 cout << endl;
				 cout << "Please login to system.";
				 cout << endl;
				 goto accountLogin;
			 }
		 break;
		 case 6:
		 //customer.getBonus;
			 if (_logged){
				 for (scI = scL.begin(); scI != scL.end(); scI++)
					 if ((*scI)->getCustomer() == loggedCustomer){
						 cout << (*scI)->getCustomer()->getBonus() << endl;
					 }
					 goto shoppingMenu;
				 }
			 else
			 {
				 cout << endl;
				 cout << "Please login to system.";
				 cout << endl;
				 goto accountLogin;
			 }
		 break;
		 case 7:
		 //customer.useBonus;
			 if (_logged){
				 for (scI = scL.begin(); scI != scL.end(); scI++)
					 if ((*scI)->getCustomer() == loggedCustomer){
						 (*scI)->setBonusUsed();
					 }
					 
					 goto shoppingMenu;
			 }
			 else
			 {
				 cout << endl;
				 cout << "Please login to system.";
				 cout << endl;
				 goto accountLogin;
			 }
		 break;
		 case 8:
		 //shoppingcart.placeOrder;
		 //Place order
			 if (_logged){
				 for (scI = scL.begin(); scI != scL.end(); scI++)
					 if ((*scI)->getCustomer() == loggedCustomer){
					 (*scI)->placeOrder();
					 }
					 goto shoppingMenu;
			 }
			 else
			 {
				 cout << endl;
				 cout << "Please login to system.";
				 cout << endl;
				 goto accountLogin;
			 }
		 break;
		 case 9:
		 //shoppingcart.cancelOrder;
		 //Cancel order
			 if (_logged){
				 for (scI = scL.begin(); scI != scL.end(); scI++)
					 if ((*scI)->getCustomer() == loggedCustomer){
						 (*scI)->cancelOrder();
					 }
					 goto shoppingMenu;
			 }
			 else
			 {
				 cout << "Please login to system.";
				 goto accountLogin;
			 }
		 break;
		 case 10:
		 //shoppingcart.showInvoice;
		 //Show invoice
			 if (_logged){
				 for (scI = scL.begin(); scI != scL.end(); scI++)
					 if ((*scI)->getCustomer() == loggedCustomer){
						 (*scI)->showInvoice();
					 }
					 goto shoppingMenu;
			 }
			 else
			 {
				 cout << endl;
				 cout << "Please login to system.";
				 cout << endl;
				 goto accountLogin;
			 }
		 break;
		 case 11:
			//Quit from account
			 loggedCustomer = new Customer();
			 _logged = false;
		 case 12:
			 goto mainMenu;
		 default:
			 cout << endl;
		 cout << "Wrong selection, please try it again." << endl;
		 cin >> selector;
		 goto customerMenu;

		 }
		 }
		 else if (selector == 4){
			 cout << "Good bye." << endl;
		 }
		else
		{
			cout << endl;
			cout << "Wrong selection please use numbers that left side of menu item." << endl;
			goto mainMenu;
			cin >> selector;
		}
#pragma endregion
}

