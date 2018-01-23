//============================================================================
// Name        : Arithmetic_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*
 *  -take large numbers of seconds and covert it to hours, mins, sec
 *
 *  -for loop that iterates 10,000x, output a dot (on same line) every 100 iterations ie .  .  .  .  .
 *  		use %  (mod operator)
 * */
//If(this here is true) {do bla bla}
//		 Else {do this here}
void filing()
    {
    int mark = 100;

    for (int count = 0; count <= 10000; count++)
	{
	if (count == mark)
	    {
	    cout << "." << mark / 100 << flush;
	    mark += 100;
	    }
	}
    cout << "" << endl;
    }

void modFiling()
    {
    int x;

    for (x = 0; x <= 10000; x++)
	{
	if (x % 100 == 0)
	    {
	    cout << "." << x / 100 << flush;
	    }
	}

    }

void time()
    {
    cout << "Please enter the number of seconds: " << flush;
    int input;

    cin >> input;
    int mins;
    int hrs;
    int sec;

    int x = input / 60; //total mins
    mins = x % 60;
    hrs = (x - mins) / 60;
    sec = input - ((hrs * 3600) + (mins * 60));

    cout << "Thank you! " << input << " seconds is equal to " << hrs << flush;

    if (hrs > 1)
	{
	cout << " hrs " << flush;
	}
    else
	{
	cout << " hr " << flush;
	}

    cout << mins << " mins and " << sec << " seconds bitch!" << endl;

    }

int main()
    {

    time();

    filing();
    cout << "XXXXX" << endl;

    modFiling();

    cout << "" << endl;
    cout << "Counting Done!!!" << endl;
    return 0;

    }
