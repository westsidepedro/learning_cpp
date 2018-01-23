/*
 * Cat.cpp
 *
 *  Created on: Jan 4, 2018
 *      Author: jpetterson
 */
#include <iostream>
#include "Cat.h"

using namespace std;

/* The variable "happy" is declared in the Cat.h      *
 * that we just pulled in with - #include "Cat.h" -   *
 * so we don't declare it here!			      */

void Cat::speek(){
    if(happy){
	cout << "Meeeeooowwwww" << endl;
    }
    else{
	cout << "SSSSS Mother fucker!!!" << endl;
    }
}

void Cat::makeHappy(){
    happy = true;
}

void Cat::makeSad(){
    happy = false;
}
