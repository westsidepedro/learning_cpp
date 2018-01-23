// "if" Statements --->  if(this is true) {do this}

#include <iostream>
using namespace std;

int main()
 {

 	string password = "hello";

 	cout << "Please enter your Password > " << flush;

 	
 	string input;
 	cin >> input;


 	if(input == password) //the condition ( == 'is equal to') then do this {...}
 	 {
 	 	cout << "Password is accepted." << endl;
 	 }	

 	if(input != password) // condition ( != 'is NOT equal to' ) then do {...}
 	 {
 		cout << "Incorrect Mother Fucker!!!" << endl;
 	 }
	

	return 0;
	
 }
