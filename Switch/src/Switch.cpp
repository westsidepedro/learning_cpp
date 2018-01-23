//============================================================================
// Name        : Switch.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Switch   ---->	 switch(value) {
/*					case x:  //must be constant, not variable or string!!!
 /					   do this if 'value' is x;
 /		NEED or it will  --->	   break;
 /		keep moving down	case y:
 /		the the list		   do this if 'value' is y;
 /		  			   break;
 /					case z:
 /					   do this if 'value' is z;
 /					   break;
 /		not req, but   -->      default:
 /		a good idea		   if 'value' is anything else do this;
 //					}
 /			-similar to  else if statements-
 /*/

#include <iostream>
using namespace std;




int main()
    {

    int value;

    cout << "enter a number between 4 and 6:" << flush;

    cin >> value;

    switch (value)
	{
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



    return 0;

    }

