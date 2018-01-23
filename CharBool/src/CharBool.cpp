//============================================================================
// Name        : CharBool.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Char and Bool  ---> (Type) bool: true=1 false=0
//			      char: single character in ascii table

#include <iostream>
using namespace std;

int main()
 {

 	bool bValue = true;
 	char cValue = '1'; //must use ' ', other wise goes to ascii table
 	char aValue = 1;

 	cout << "bool value: " << bValue << endl;

 	cout << "char value: " << cValue << endl;

 	cout << "char value without ' ': " << aValue << endl;



	return 0;

 }
