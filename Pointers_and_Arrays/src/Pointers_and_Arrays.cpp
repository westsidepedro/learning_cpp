//============================================================================
// Name        : Pointers_and_Arrays.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*
 * 1. loop through an array using point, with array element reference syntax
 *
 * 2. loop through an array by using incrementing a pointer
 *
 * 3. loop through an array stopping by comparing 2 pointers
 *
 * */




int main()
    {

    string texts[] =
	{
	"one", "two", "three"
	};

    string * pTexts = texts;




    cout << sizeof(texts) / sizeof(string) << endl; // this is telling us how many elem are in the array
    cout << endl;

//example 1

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
	{
	cout << pTexts[i] << " " << flush;
	}

    cout << endl;
    cout << endl;
    cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
    cout << endl;

//example 2
	//can have more than 1 command in that last slot v
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++)
	{
	cout << * pTexts << " " << flush;
	}

    cout << endl;
    cout << endl;
    cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
    cout << endl;

//example 3
    string * pElement = &texts[0];
    string * pEnd = &texts[2];

    while (true)
	{
	cout << * pElement << " " << flush;

	if (pElement == pEnd)
	    {
	    break;
	    }
	pElement++;
	}

    return 0;
    }
