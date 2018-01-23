/*
 * House.cpp
 *
 *  Created on: Jan 11, 2018
 *      Author: jpetterson
 */

#include "House.h"
#include <iostream>
#include <sstream>

using namespace std;

string House::showMe()
    {
    stringstream ss;

    ss << "This is the ";
    ss << familyName;
    ss << " home. A ";
    ss << color;
    ss << " ";
    ss << floors;
    ss << " story house wonderfully located!";

    return ss.str();

    }
