/*
 * Person.h
 *
 *  Created on: Jan 9, 2018
 *      Author: jpetterson
 */

#ifndef PERSON_H_
#include <iostream>

using namespace std;


#define PERSON_H_

class Person
    {
    private:
	string name;
	int age;
	string gender;

    public:
	Person();
	Person(int newAge, string newGender, string newName);
	string toMethod();

    };

#endif /* PERSON_H_ */
