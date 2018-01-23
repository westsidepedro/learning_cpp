//============================================================================
// Name        : Pointers_and_Arrays_Exercise.cpp
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

int john[] =
    {
    0, 6, 12, 18, 24, 30, 36
    };

int * pointer = john; // or john[0]

void example1()
    {

    for (int i = 0; i < 7; i++)
	{
	cout << pointer[i] << flush;

	if (i < 6)
	    {
	    cout << ", " << flush;
	    }
	else
	    (cout << "." << endl);
	}
    }

void example2()
    {

    for (int x = 0; x < 7; x++)
	{
	cout << *pointer << flush;

	if (x < 6)
	    {
	    cout << ", " << flush;
	    }
	else
	    (cout << "." << endl);

	pointer++;
	}
    }

void example3()
    {
    int * ele = &john[0];
    int * end = &john[6];

    while (true)
	{
	cout << *ele << flush;
	if (ele < end)
	    {
	    cout << ", " << flush;
	    }
	else
	    (cout << "." << endl);
	if (ele == end)
	    {
	    break;
	    }
	ele++;
	}
    }

int main()
    {

    example1();


    example2();


    example3();
    cout << endl;

    for (int x = 0; x < 7; x++)
	{
	cout << &john[x] << endl;
	}

    return 0;
    }
