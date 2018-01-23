//============================================================================
// Name        : UserInput.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// User Input --->  cin >>
//			(build, then open .exe in cmd (ctrl+shift+r click in folder) )

#include <iostream>
using namespace std;

int main()
    {

    cout << "Enter your name: " << flush;

    string input; 			//declaring that there is a var type 'string' called "input"

    cin >> input;			// >> (Extracting Opporator)

    cout << "You entered: " << input << endl;

    cout << "Enter a Number this time: " << flush;

    int value;

    cin >> value;

    cout << "You entered " << value << " as your number!" << endl;

    cout << "Do you want to end this?";

    string yes;

    cin >> yes;

    cout << "You said..." << yes << endl;

    return 0;

    }
