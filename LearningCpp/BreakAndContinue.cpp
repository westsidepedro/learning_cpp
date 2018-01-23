// Break and Continue --->		break = break out of loop RIGHT AFTER THE ITS " ; "
//								continue = skips the rest of the loop and jumps
//									back to the start of the same loop.
#include <iostream>
using namespace std;

int main()
 /*{
 	//--- BREAK --------------------------------------------------------------------------

 	for(int i = 1 ; i < 10 ; i++ ) 
 	 {
 	 	cout << "i is: " << i << flush;

 	 		if( i == 4)
 	 	 	 {
 	 			//cout << "   lets call that shit a day huh." << endl;
 	 			break;
 	 	 	 }
 	 	cout << "   now lets add one to to that" << endl;
 	 }
 	cout << "And this ends our program" << endl;


	return 0;
	
 }

{
 	//--- CONTINUE ----------------------------------------------------------------------

 	for(int i = 1 ; i < 10 ; i++ ) 
 	 {
 	 	cout << "i is: " << i << flush;

 	 		if( i == 4)
 	 	 	 {
 	 			//cout << "   lets call that shit a day huh." << endl;
 	 			continue;	// do the i++ HERE and go back to top of loop
 	 	 	 }
 	 	cout << "   now lets add one to to that" << endl; // now do the i++, <10?
 	 }
  cout << "And this ends our program" << endl;


	return 0;
	
 }*/


// EXAMPLE FROM THE DO WHILE -----------------------------------------------------------

 {
 	const string password = "hello";	// const = the value will not be changed, EVER
 	string input;

 	do
 	 {
 	  cout << "ENTER PASSWORD:" << flush;
 	  cin >> input;

 	 	if(input == password)
 	 	 {
 	 	 	break;
 	 	 }
 	 	 
 	 	 else
 	 	 	{
 	 	 		cout << "Please try again Mother Fucker!" << endl;
 	 	 	} 	 		
 	 }
 	 while(true);

 	 	cout << "Welcome Mr. Petterson" << endl;



	return 0;
	
 }