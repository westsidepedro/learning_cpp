/*
 * Cat.cpp
 *
 *  Created on: Jan 4, 2018
 *      Author: jpetterson
 */

#include <iostream>
#include "Cat.h"

using namespace std;



Cat::Cat()				//Constructor
    {
    cout << "Cat created." << endl;

    happy = true;
    }

Cat::~Cat(){				//Destructor
    cout << "Cat destroyed." << endl;
}


void Cat::speek()
    {
    if (happy)
	{
	cout << "Meeeeooowwwww" << endl;
	}
    else
	{
	cout << "SSSSS Mother fucker!!!" << endl;
	}
    }
