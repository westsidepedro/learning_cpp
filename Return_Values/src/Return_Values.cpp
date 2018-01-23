//============================================================================
// Name        : Return_Values.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Return Values --->		void nameHere = returns nothing to "int main(){}"
/*				int nameHere = int goes into "int main(){}"
 /				***can retun anything BUT arrays***
 */

#include <iostream>
using namespace std;

void showMenu()
    {
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
    }

int getInput()
    {	 					// get value -in this case "input"-
    cout << "Enter selection: " << flush;	// from here

    int input;
    cin >> input;

    return input;				// return says what "getInput" is = to
    }

int main()					// INTO HERE
    {
    showMenu();
    int selection = getInput();

    switch (selection)
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

    return 0;
    }
