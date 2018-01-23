/*
 * Person.cpp
 *
 *  Created on: Jan 11, 2018
 *      Author: jpetterson
 */

#include "Person.h"
#include <iostream>
#include <sstream>

using namespace std;

Person::Person(): name("blank"), age(0)
    {
	// same as putting
	// 	name = "blank;
	// 	age = 0;
	// down here.
    }

Person::Person(string name, int age): name(name), age(age)
    {
/************************************************************************************************
* 												*
* 			CAN BE DONE HERE OR IN THE .H FILE					*
* 												*
* 		Class::className(): bla(valueOfBla), arg(valueOfArg) {}				*
* 												*
* 		Class::className(string x, int y): arg(x), arg(y) {}				*
* 												*
* 		-------------------------------							*
* 		|			      |							*
* 		|		name(name) , age(age)	<--,					*
*    name "default" value -------^     ^------from  Person::Person(string *HERE*, int *HERE*)	*
* 	  -from "private:"			   -value we input/change			*
*					  							*
*************************************************************************************************/
    }

string Person::personalInfo()
    {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << endl;
    ss << " Age: ";
    ss << age;
    ss << endl;

    return ss.str();
    }
