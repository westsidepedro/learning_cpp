//============================================================================
// Name        : Variables.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Variables  ---> things that can change value (int)

#include <iostream>
using namespace std;

int main()
    {

    int numberCats = 5; //set aside a bit of memory for int (kinda like a sticky note)
			// "int" = is a keyword for any number w/o a decimal
			// "numberCats" is a VARIABLE (value can change)

    int numberDogs = 7;
    int numberAnimals = numberCats + numberDogs;

    cout << "number of cats: " << numberCats << endl;
	    //"number of cats" is a string (a bit of text) literal (can not change)

    cout << "number of dogs: " << numberDogs << endl;

    cout << "Total number of animals: " << numberAnimals << endl;

    cout << "NEW DOG ACQUIRED!!!" << endl;

    numberDogs = numberDogs + 1;

    cout << "New number of Dogs: " << numberDogs << endl;

    return 0;

    }
