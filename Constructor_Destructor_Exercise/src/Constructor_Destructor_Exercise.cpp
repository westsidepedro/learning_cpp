//============================================================================
// Name        : Constructor_Destructor_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Color.h"

using namespace std;

int main()
    {

    Color jim;

	{
	Color bob;

	cout << " Bob's " << flush;
	bob.red();
	cout << " Bob's " << flush;
	bob.blue();
	}

    cout << " Jim's " << flush;
    jim.blue();



    cout << "   The End " << endl;

    return 0;
    }
