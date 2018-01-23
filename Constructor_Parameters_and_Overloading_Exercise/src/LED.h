/*
 * LED.h
 *
 *  Created on: Jan 9, 2018
 *      Author: jpetterson
 */

#ifndef LED_H_
#define LED_H_

#include <iostream>
#include <sstream>

using namespace std;

class LED
    {
    private:
	int Red;
	int Green;
	int Blue;
	bool Pulse;

    public:
	LED();
	LED(int newRed, int newGreen, int newBlue, bool withPulse);
	string showMe();


    };

#endif /* LED_H_ */
