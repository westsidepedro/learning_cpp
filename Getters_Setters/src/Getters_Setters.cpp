//============================================================================
// Name        : Getters_Setters.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main()
    {

    Person One;

    cout << One.toString() << endl;

    One.setName("Jane");  //set string name to Jane

    cout << "Name of person with get method: " << One.getName() << endl;

    cout << One.toString() << endl; //name value for Person One is Jane
    cout << "" << endl;
    cout << "" << endl;

    Person Two;
    cout << "Second person created now...." << endl; //creating a new Person, and because
						     // its new "name" goes back to George
    cout << Two.toString() << endl;		     // for Person Two
							    //But stills stays the same,"Jane"
    cout << "Person one again: " + One.toString() << endl;  // as above, for Person One

    return 0;
    }
