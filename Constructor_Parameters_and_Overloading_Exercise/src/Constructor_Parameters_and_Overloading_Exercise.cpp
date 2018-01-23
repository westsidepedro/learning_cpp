//============================================================================
// Name        : Constructor_Parameters_and_Overloading_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LED.h"

using namespace std;

int main()
    {
    LED first;
    LED second(13, 240, 180, false);

    cout << first.showMe() << endl;
    cout << second.showMe() << endl;

    return 0;
    }
