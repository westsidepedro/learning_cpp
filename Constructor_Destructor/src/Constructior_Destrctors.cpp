//============================================================================
// Name        : Constructior_Destrctors.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Constructor:
 *
 * 	nameOfClass();   <-- just that, NO void/int/loop/... 	in .h
 * 	nameOfClass::nameOfClass()
 *     		     {
 * 		     constructor stuff here;
 * 		     }						in .cpp
 *
 * Destructor:
 *
 * 	~nameOfClass();   <-- same as constructor only with ~	in .h
 * 	nameOfClass::~nameOfClass()
 *     		     {
 * 		     destructor stuff here;
 * 		     }						in .cpp
 *
 */
#include <iostream>
#include "Cat.h"

using namespace std;

int main()
    {										// {<--
    cout << "Starting program..." << endl;					    //|
										    //|
    Cat bob;		//this is where the Constructor starts, and only runs between | exstantsiation
    bob.speek();	//which is it's "scope". ie nearest { } 							    //|  creating something
										    //|	 from a Class
    cout << "Ending program..." << endl;					    //|
    return 0;									    //|
    }										// }<--
			//now the destructor runs and clears memory of class info

