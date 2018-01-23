// Switch   ---->	 switch(value) {
/*									case x:  //must be constant, not variable or string!!!
/										   do this if 'value' is x;
/				NEED or it will  --->	   break;
/				keep moving down	case y:
/				the the list			   do this if 'value' is y;
/										   break;
/									case z:
/										   do this if 'value' is z;
/										   break;
/				not req, but   -->  default:
/				 a good idea			   if 'value' is anything else do this;
/
/									}
/											-similar to  else if statements-
/*/

#include <iostream>
using namespace std;

int main()
 {
 	int value = 71;

 	switch (value) {
 				     case 4:
 				   		cout << "value is 4." << endl;
 				   		break;
 				     case 5:
 				   		cout << "value is 5." << endl;
 				   		break;
 				     case 6:
 				   		cout << "value is 6." << endl;
 				   		break;
 				     default:
 				   		cout << "aint none of this is true fool." << endl;
 				   	}


cout << endl;
cout << endl;
cout << endl;

//////////////////////////// Practice time ////////////////////////////

			int input;
			int count = 0;
   do
	{	
	  cout << "Please make a selection between 1-5:" << flush;
	  cin >> input;
	
	  switch (input) {
			case 1:
 				   for (int i = 1; i < 3; i++)
 				   {
 				   		cout << "beatle juice " << endl;
 				   			if (i > 1)
 				   		  	 {
 				   				cout << "beatle juice!!!" << endl;
 				   			    break;
 				   		     }
 				   };
 				   break;
 			case 2: 						
 				   do
 				    {
 				   	 for (int i = 0; i < 13 ; i++)
 				   	   {
 				   		 cout << "int i is =" << i << endl;  
					   }					  
					   count = count + 1;
 				   	   cout << "run through number: " << count << endl; 				   
 				    } while (count < 5);
 				   break;
 			case 3:
 				   cout << "cheesy puffs" << endl;
 				   break;
 			default:
 					cout << "well shucks, good bye" << endl;
					}

	} while (input <= 3); 

	return 0;
	
 }
