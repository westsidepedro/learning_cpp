//============================================================================
// Name        : If_Else.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// If Else  ---> If(this here is true) {do bla bla}
//		 Else {do this here}

#include <iostream>
using namespace std;

int main()
 {
 	cout << "Welcome to the jungle bitch!" << endl;
 	cout << "Chose wisely..." << endl;
 	cout << "-----------------------------" << endl;
 	cout << "1. Start Program." << endl;
 	cout << "2. Copy the cats meow." << endl;
 	cout << "3. End the World." << endl;
 	cout << "4. Date Jessie's Mom." << endl;
 	cout << "5. End Program." << endl;

 	cout << "Your choice good Sir??? " << flush;

 	int Value;
 	cin >> Value ;

 	cout << "You chose #" << Value << endl;

 	if(Value == 1)
 	 {
 		cout << "Starting Program: Duke Nukem..." << endl;
 	 }
 	else
 	 {
 		cout << "Why don't you just start the program huh smart ass?" << endl;
 	 }



	return 0;

 }
