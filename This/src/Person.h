/*
 * Person.h
 *
 *  Created on: Jan 11, 2018
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
	int age;

    public:
	Person();
	Person(string name, int age);

	string personalInfo();
    };

#endif /* PERSON_H_ */
