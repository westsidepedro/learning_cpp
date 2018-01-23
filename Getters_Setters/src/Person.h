/*
 * Person.h
 *
 *  Created on: Jan 8, 2018
 *      Author: jpetterson
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person
    {
    private:
	string name;

    public:
	Person();
	string toString();
	void setName(string newName);
	string getName();

    };

#endif /* PERSON_H_ */
