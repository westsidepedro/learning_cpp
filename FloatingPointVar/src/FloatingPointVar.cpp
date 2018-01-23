//============================================================================
// Name        : FloatingPointVar.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Floating Point Vars  ---> (Type) float (any number with a decimal, 32bit)
//				    double (decimal number, 64bit)
//				    decimal (decimal number, 128bit)
#include <iostream>
#include <iomanip>  //needed for "fixed", "scientific", "setprecision()"
					// fixed = always writen out
					// scientific = writen out in scientific format
					// setprecision = use defined amount of numbers after "." (number)
using namespace std;

int main()
 {

 	float fvalue = 123.4567898765432123456789;
 	double dvalue = 123.4567898765432123456789;
 	long double lvalue = 123.4567898765432123456789;


 	cout << "FLOAT" << endl;
 	cout <<"----------------" << endl;
 	cout << "size of float: " << sizeof(fvalue) << endl;
 	cout << fixed << fvalue << endl;
	cout << scientific << fvalue << endl;
	cout << setprecision(30) << fixed << fvalue << endl;
		cout <<" " << endl;

	cout << "DOUBLE" << endl;
	cout <<"----------------" << endl;
	cout << "size of double: " << sizeof(dvalue) << endl;
	cout << fixed << dvalue << endl;
	cout << scientific << dvalue << endl;
	cout << setprecision(30) << fixed << dvalue << endl;
		cout <<" " << endl;

	cout << "LONG DOUBLE" << endl;
	cout <<"----------------" << endl;
	cout << "size of long double: " << sizeof(lvalue) << endl;
	cout << fixed << lvalue << endl;
	cout << scientific << lvalue << endl;
	cout << setprecision(30) << fixed << lvalue << endl;
		cout <<" " << endl;

	return 0;

 }
