/*
 * Story.cpp
 *
 *  Created on: Jan 4, 2018
 *      Author: jpetterson
 */

#include <iostream>
#include "Story.h"

using namespace std;

void Tale::intro(){
    cout << "Once apon a time..." << endl;
}

void Tale::body(){
    cout << "In a land far far away there lived a boy. " << flush;
}

void Tale::details(){
    cout << "He didn't give a fuck!" << endl;
}

void Tale::ending(){
    cout << "" << endl;
    cout << "" << endl;
    cout << "THE END" << endl;
}


