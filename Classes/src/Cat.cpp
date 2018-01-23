#include <iostream>

#include "Cat.h"

using namespace std;

/* this file is where we keep the actual functions, commands, whatever *
 * we want to use/run/call in our program.			       *
 *								       */

void Cat::speak() {	//ClassName::__  =__ belongs to this class
	cout << "Meeeowwww" << endl;
}

void Cat::jump() {
    cout << "Jumping to top of bookcase" << endl;
}
