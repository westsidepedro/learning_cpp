//============================================================================
// Name        : Functions.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Functions (Subroutines)  --->    void nameHere() {
/*							code that we want
/							to run when we type
/							"nameHere();"
/						    }
*/


#include <iostream>
using namespace std;

void showMenu(){
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

void getInput(){
	cout << "Enter selection: " << flush;

 	int input;
 	cin >> input;
 	 {
 	 	switch (input)
 			{
 				case 1:
 						cout << "Searching...." << endl;
 						break;
 				case 2:
 						cout << "Opening Records...." << endl;
 						break;
 				case 3:
 						cout << "Quiting" << endl;
 						break;
 				default:
 						cout << "Please select an item from the menu." << endl;
 			}
 	 }
}

int main()
 {
 	showMenu();
 	getInput();

	return 0;
 }
