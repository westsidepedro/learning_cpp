//============================================================================
// Name        : While_Loop.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// While Loop  --->	While(this is true)
//				{
//				 do this stuff
//				}

#include <iostream>
using namespace std;
/*
 int main()
 {
 int repeat = 1;

 while(repeat <= 5)
 {

 cout << "Hello " << repeat << endl;

 repeat++;	// is the same as --->  repeat = repeat + 1

 }


 return 0;

 }

 */

int main()
    {
    int Reply = 0;

    while (Reply <= 3)
	{
	cout << "This is the menu with questions." << endl;
	cout << "1. Kill Kenny." << endl;
	cout << "2. Jump the Shark." << endl;
	cout << "3. Shit the bed." << endl;
	cout << "4. Leave" << endl;
	cout << " " << endl;
	cout << "Your choice is:" << flush;

	cin >> Reply;

	cout << "You selected #" << Reply << endl;

	if (Reply == 1)
	    {
	    cout << "Yeah, fuck Kenny!" << endl;
	    }
	else if (Reply == 2)
	    {
	    cout << "HERE FISHY FISHY FISH!!!" << endl;
	    }
	else if (Reply == 3)
	    {
	    cout << "Taco Bell Powers Activated" << endl;
	    }
	else if (Reply == 4)
	    {
	    cout << "Exit Program" << endl;
	    }
	else
	    {
	    cout << "Invalid choice, Exiting program b/c you're a lil bitch." << endl;
	    }

	cout << " " << endl;

	}

    return 0;
    return 0;
    }
