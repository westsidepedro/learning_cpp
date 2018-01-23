//============================================================================
// Name        : Constructor_Initialization_Lists_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "House.h"
#include <iostream>

using namespace std;

int main()
    {
    House house1("Johnson", 3, "blue");
    House house2("Petterson", 2, "blue");
    House house3("Kim", 15, "purple");
    House house4;

    cout << house1.showMe() << endl;
    cout << house2.showMe() << endl;
    cout << house3.showMe() << endl;

    cout << "And this is the blank house format...." << endl;
    cout << house4.showMe() << endl;
    return 0;
    }

//House(string familyName, int floors, string color)
