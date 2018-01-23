/*
 * Person.cpp
 *
 *  Created on: Jan 8, 2018
 *      Author: jpetterson
 */

#include "Person.h"

Person::Person()
    {
    name = "George";
    }

string Person::toString()
    {
    return "Person's name is: " + name;
    }

void Person::setName(string newName)
    {
    name = newName; //set string name to "newName" -insert the "newName" Person::setName(HERE)
    }

string Person::getName()
    {
    return name;  //getName is whatever string name is
    }


