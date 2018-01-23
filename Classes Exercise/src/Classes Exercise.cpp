//============================================================================
// Name        : Classes.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Story.h"


using namespace std;

string words = "This is a string and here is a story told by Bill";


int main() {

    cout << words << endl;

    Tale speaker;

    speaker.intro();
    speaker.body();
    speaker.details();
    cout << "x" ",   just the letter" << endl;
    speaker.ending();

	return 0;
}
