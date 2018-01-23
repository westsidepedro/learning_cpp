/*
 * Cookies.h
 *
 *  Created on: Jan 11, 2018
 *      Author: jpetterson
 */

#ifndef COOKIES_H_
#define COOKIES_H_

#include <iostream>

using namespace std;

class Cookies
    {
    private:
	string name;
	int qtyS;
	int qtySF;
	int order;

    public:
	Cookies();
	Cookies(int order, string name, int qtyS, int qtySF);

	string cookieInfo();

    };

#endif /* COOKIES_H_ */
