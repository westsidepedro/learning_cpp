//============================================================================
// Name        : Strings.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
// Strings  ---> A bunch of text

#include <iostream>
using namespace std;

int main()
 {

 	string text1 = "Hello "; //string litterals go in " "
 		// string = Class
 		// text1 = Object

 	string text2 = "fred";

 	string text3 = text1 + text2; //concatinate (add one string onto another string)

 	cout << text1 << text2 << " (text1 + text2)" << endl;
 	cout << "-----------------------" << endl;
 	cout << text3 << " (text3)" << endl;




	return 0;

 }
