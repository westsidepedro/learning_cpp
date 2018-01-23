/*
 * House.h
 *
 *  Created on: Jan 11, 2018
 *      Author: jpetterson
 */

#ifndef HOUSE_H_
#define HOUSE_H_
#include <iostream>
#include <sstream>

using namespace std;

class House
    {
    private:
	string familyName;
	int floors;
	string color;

    public:
	House() :
	familyName("Jones"), floors(1), color("White")  {};
	House(string familyName, int floors, string color) :
		familyName(familyName), floors(floors), color(color) {};
	string showMe();
    };

#endif /* HOUSE_H_ */
