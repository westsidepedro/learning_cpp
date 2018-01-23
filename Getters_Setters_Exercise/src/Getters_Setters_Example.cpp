//============================================================================
// Name        : Getters_Setters_Example.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cars.h"

using namespace std;

int main()
    {
    Cars carOne;

    cout << "I own a " << flush;
    carOne.carColorYear();
    carOne.carModel();
    cout << " " << endl;
    cout << " " << endl;

    Cars carTwo;

    cout << "Owner 2 owns a " << flush;
    carTwo.setColor("Red");
    carTwo.getColor();
    carTwo.carColorYear();
    carTwo.carModel();
    cout << " " << endl;
    cout << " " << endl;

    Cars carThree;

    cout << "The third driver owns a " << flush;
    carThree.setColor("Purple"); // type in a dif "value" for string color ,other than the default of 'blue'
    carThree.getColor();	 // pulls "value" from above and uses it as the new sting color "value"
    carThree.setYear("2007");
    carThree.getYear();
    carThree.setModel("Jetta");
    carThree.getModel();
    carThree.carColorYear();
    carThree.carModel();
    cout << " " << endl;
    cout << " " << endl;

    Cars carFour;

    cout << "The last car is " << flush;
    carFour.carColorYear();
    carFour.carModel();

    return 0;
    }
