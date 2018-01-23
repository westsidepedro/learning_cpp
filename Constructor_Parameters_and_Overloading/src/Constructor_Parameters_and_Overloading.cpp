//============================================================================
// Name        : Constructor_Parameters_and_Overloading.cpp
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

    Person person1;
    Person person2(39, "Male", "Timmy");
    Person person3(14, "Female", "JoAnna");
    cout << person1.toMethod() << endl;
    cout << person2.toMethod() << endl;
    cout << person3.toMethod() << endl;
    return 0;
    }
