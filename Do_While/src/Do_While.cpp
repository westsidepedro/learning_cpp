//============================================================================
// Name        : Do_While.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Do While  --->	do {this} while(this is true)
/*	do
	  {
	    this stuff;  	   // will run this at least once b/c 'while' is after it
	  }				checks if condition 'while' is true
	 while(this is true);  	  // if condition is true, we run 'do' again
					if condition is false, we move on from the 'do'
*/

#include <iostream>
using namespace std;

int main()
 {

 const string password = "hello";	// const = the value will not be changed, EVER
 string input;

 	do{
 	 cout << "ENTER PASSWORD:" << flush;
 	 cin >> input;

 	 if(input != password){
 	     cout << "Please try again Mother Fucker!" << endl;
 	 }

 	}while(input != password);
 	 cout << "Welcome Mr. Petterson" << endl;



return 0;

 }
