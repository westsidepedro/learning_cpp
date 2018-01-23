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

Person::Person()
    {
    age = 0;	// "this->age" is this one  -it "points" to this one
    name = "";	// "this->name" is this one  -it "points" to this one
    }

Person::Person(string name, int age)  //name and age are "inscope" -inside the ()
    {
    this->name = name;	// name is referring to the name in "Person(string name, int age)"
    this->age = age;	// age is referring to the age in "Person(string name, int age)"
  /*******************************************************
   *   ^	 ^- the ones in this function		 *
   *   |						 *
   *   |- the ones in the "private:" part of the .h file *
   *******************************************************/


    cout << "Memory locations is: " << this << endl;
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
