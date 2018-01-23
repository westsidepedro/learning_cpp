/*
 * Color.cpp
 *
 *  Created on: Jan 8, 2018
 *      Author: jpetterson
 */

#include "Color.h"
#include <iostream>

using namespace std;

Color::Color()
    {
    cout << "Constructor is begining..." << endl;

    happy = true;

    }

Color::~Color()
    {
    cout << "Destructor has run..." << endl;

    }

void Color::red()
    {


    if (happy != true )
	{
	cout << "Color is HAPPY red" << endl;
	}
    else
	{
	cout << "Color is red" << endl;
	}
    }

void Color::blue()
    {
    if (happy)
	{
	cout << "Color is HAPPY blue" << endl;
	}
    else
	{
	cout << "Color is blue" << endl;
	}
    }
