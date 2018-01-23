//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Arrays  --->			int Name[*]   *- "element" number of #'s in the array
//						  starts at 0, can be left blank

#include <iostream>
using namespace std;

int main()
    {
    int values[3]; // values[0,1,2]

    values[0] = 88;    //store '88' in position [0] of our array
    values[1] = 1234;  //store '1234' in position [1] of our array
    values[2] = 5;     //store '5' in position [2] of our array

    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;
    cout << "----------------------------" << endl;

    float number[4] =
	{
	4.5, 2.3, 7.2, 8.1
	};

    cout << number[2] << endl;
    cout << "----------------------------" << endl;

    for (int i = 0; i < 3; i++)
	{
	cout << "Number stored in position " << i << " of Array 'values' is:"
		<< values[i] << endl;
	}

    cout << "----------------------------" << endl;

    for (int i = 0; i < 4; i++)
	{
	cout << "Number stored in position " << i << " of Array 'number' is:"
		<< values[i] << endl;
	}


    /* cout << "----------------Table of 12 Exercise----------------" << endl;

     int NewArray[11]
     {
     };
     int value;

     for (int i = 0; i < 12; i++)
     {
     value = (i + 1);

     NewArray[i] = value * 12;

     cout << "NewArray[" << i << "]" << NewArray[i] << endl;
     }

     //cout << "------------------------------" << endl;

     //cout << Array[5] << endl;
      */
    return 0;

     }

