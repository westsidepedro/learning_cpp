//============================================================================
// Name        : Pointers_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void rockerStar(int *leadGuitar)
    {
    cout << "*leadGuitar is: " << *leadGuitar << endl;
    *leadGuitar = 223445664;
    cout << "*leadGuitar is now: " << *leadGuitar << endl;

    }

int main()
    {
    int drummer = 144;
    int *p = &drummer;
    int base = 39758;

    cout << "The int drummer is: " << drummer << endl;
    cout << "Location of the int drummer is: " << p << endl;
    cout << "The value of drummer via pointer is: " << *p << endl;

    cout << "*p + base=" << *p + base << endl;
    cout << "drummer + base=" << drummer + base << endl;

    cout << "" << endl;
    cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
    cout << "" << endl;

    cout << "The int base is: " << base << endl;

    rockerStar(&base);		//Because int *leadGuitar has a --*-- this need to be a location --&--

    cout << "The int base is now: " << base << endl;

    cout << "*p + base=" << *p + base << endl;
    cout << "drummer + base=" << drummer + base << endl;

    return 0;
    }
