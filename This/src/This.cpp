//============================================================================
// Name        : This.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Person.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
    {

    Person person1;			//Person::person()  is "ran"
    Person person2("Bob", 21);		//Person::persong(string name, int age) is "ran"

    cout << person1.personalInfo() << "^--person1 Memory location:" << &person1 << endl;
    cout << person2.personalInfo() << "^--person2 Memory location:" << &person2 << endl;
    /************************************************ |-------^ *********
     * 									*
     * to find the memory location of anything put a "&" in front of it *
     *									*
     ********************************************************************/
    return 0;
    }
