/*
 * Cars.h
 *
 *  Created on: Jan 8, 2018
 *      Author: jpetterson
 */

#ifndef CARS_H_
#define CARS_H_

#include <iostream>

using namespace std;

class Cars
    {
    private:
	string color;
	string year;
	string model;

    public:
	Cars();
	void carModel();
	void carColorYear();
	string getColor();
	void setColor(string newColor);
	string getYear();
	void setYear(string newYear);
	string getModel();
	void setModel(string newModel);

    };

#endif /* CARS_H_ */
