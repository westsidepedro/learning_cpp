/*
 * LED.cpp
 *
 *  Created on: Jan 9, 2018
 *      Author: jpetterson
 */

#include "LED.h"
#include <iostream>
#include <sstream>

using namespace std;

LED::LED()
    {
    Red = 255;
    Green = 255;
    Blue = 255;
    Pulse = true;
    }

LED::LED(int newRed, int newGreen, int newBlue, bool withPulse)
    {
    Red = newRed;
    Green = newGreen;
    Blue = newBlue;
    Pulse = withPulse;
    }

string LED::showMe()
    {
    stringstream ss;

    ss << "Red= ";
    ss << Red;
    ss << "  Green= ";
    ss << Green;
    ss << "  Blue= ";
    ss << Blue;
    ss << "  With Pulse:";
    ss << Pulse;

    return ss.str();
    }
