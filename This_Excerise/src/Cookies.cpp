/*
 * Cookies.cpp
 *
 *  Created on: Jan 11, 2018
 *      Author: jpetterson
 */

#include "Cookies.h"
#include <iostream>
#include <sstream>

using namespace std;

Cookies::Cookies()
    {
    name = "";
    qtyS = 0;
    qtySF = 0;
    order = 0;
    }

Cookies::Cookies(int order, string name, int qtyS, int qtySF)
    {
    this->order = order;
    this->name = name;
    this->qtyS = qtyS;
    this->qtySF = qtySF;
    }

string Cookies::cookieInfo()
    {

    stringstream ss;

    ss << "Order#";
    ss << order;
    ss << ":";
    ss << endl;
    ss << "We need ";
    ss << qtyS;
    ss << " ";
    ss << name;
    ss << " cookies. ";
    ss << endl;
    ss << qtySF;
    ss << " being of the sugar free variety.";
    ss << endl;

    return ss.str();

    }

