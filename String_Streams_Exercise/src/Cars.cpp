/*
 * Cars.cpp
 *
 *  Created on: Jan 8, 2018
 *      Author: jpetterson
 */

#include "Cars.h"
#include <iostream>

using namespace std;

Cars::Cars()
    {
    color = "blue";
    year = "1969";
    model = "Mustang";
    }

void Cars::carModel()
    {
    cout << model <<  "." << endl;
    }

void Cars::carColorYear()
    {
    cout << color + " " + year + " " << flush;
    }

// COLOR //
void Cars::setColor(string newColor)  // type the new color in ()  -as a string " "
    {
    color = newColor;		      // color now equals what we type in newColor
    }

string Cars::getColor()		      // gets the "value" of color from setColor
    {				      // and actually use it where ever 'color' shows up
    return color;		      // it is 'returning' an actual value for 'color'
    }

// YEAR //
void Cars::setYear(string newYear)	//same as above
    {
    year = newYear;
    }
string Cars::getYear()
    {
    return year;
    }

// MODEL //
void Cars::setModel(string newModel)	//same as above
    {
    model = newModel;
    }

string Cars::getModel()
    {
    return model;
    }
;

