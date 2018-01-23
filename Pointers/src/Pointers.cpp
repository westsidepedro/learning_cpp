//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void changer(int * xValue)
    {
    cout << xValue << endl;						//what is the value of xValue

    cout << "--2. Value of int in changer: " << * xValue << endl;	//what is in the "bucket" xValue

    cout << xValue << endl;						//value of xValue

    * xValue = 567;							//change what is in the "bucket"

    cout << "--3. Value of int in changer: " << * xValue << endl;	//what is in the "bucket" now???

    cout << xValue << endl;						//value of xValue still hasn't changed
    }

int main()
    {
    int nValue = 4;
    int * pValue = & nValue;	// &whatever = address of whatever
				// pValue is = to ADDRESS to where "int nValue" is located
				// *pValue = whatever is inside the nValue address
				// -- * -- is the pointer and means "look inside"

    cout << "Int Value: " << nValue << endl;
    cout << "The address to int: " << pValue << endl;

    cout << "Int value via pointer: " << * pValue << endl;
    cout << "" << endl;
    cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
    cout << "" << endl;

    int dValue = 1234;
    cout << & dValue << endl;			// where is dValue being stored

    cout << "--1. dValue: " << dValue << endl;	// what is the value of dValue

    changer(& dValue);/**********************************************************************************
		      *  run void changer(int * xValue) with xValue = &dValue (the address/bucket dValue)
		      *
		      *  the " * " then asks us what is in the bucket... which is 1234
		      *       we cout that answer
		      *
		      *  now we look in side the bucket  -- the * -- and change what is in there to 567
		      *        we cout that answer
		      *
		      *********************************************************************************/

    cout << "--4. dValue: " << dValue << endl;	// what is the value of dValue? the pointer changed it!
    cout << &dValue << endl;			// dValue is still stored in the same address


    return 0;
    }
