// Else If  ---> If(this here) is true do {bla bla},
//				 Else if(this here) is true {do this here}
//				 Else if(this one) is true {do this}
//				 Else {do this then}

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
 	else if(Value == 2)
 	 {
 		cout << "Meow Meow Mewo!" << endl;
 	 }
 	 else if(Value == 3)
 	 {
 		cout << "3... 2... 1... booooooooooOOOOOOMMMMMMMMM" << endl;
 	 }
 	 else if(Value == 4)
 	 {
 		cout << "Jessie's Mom does have it going on" << endl;
 	 }
 	 else if(Value == 5)
 	 {
 		cout << "Shutting down now..." << endl;
 	 }
 	 else
 	 {
 		cout << "Pick a number between 1 and 5 jackass!" << endl;
 	 }



	return 0;

 }
