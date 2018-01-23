/*
 * Person.cpp
 *
 *  Created on: Jan 9, 2018
 *      Author: jpetterson
 */

#include "Person.h"
#include <sstream>

using namespace std;

Person::Person()
    {
    name = "undefined";
    age = 0;
    gender = "male";
    }
Person::Person(int newAge, string newGender, string newName)
    {
    age = newAge;
    gender = newGender;
    name = newName;
    }

string Person::toMethod()
    {
    stringstream ss;

    ss << "Users name is: ";
    ss << name;
    ss << ". A ";
    ss << age;
    ss << " years old ";
    ss << gender;
    ss << ".";

    return ss.str();

    }

