//============================================================================
// Name        : Sizeof.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Sizeof and Arrays --->		sizeof(whatever)  //in bytes

#include <iostream>
using namespace std;

int main()
    {

    int values[] =
	{
	4, 68, 1, 56
	};

    cout << sizeof(values) << endl;

    cout << sizeof(values) / sizeof(int) << endl; // can do math with it as well
//     total size of arry / size of a single int (4)
    for (int i = 0; i < 4; i++)
	{
	cout << values[i] << " " << flush;
	}
    cout << endl;
    cout << endl;

    cout << "----------Practice----------" << endl;


    int MultiArray[5][8];

    for (int i = 0; i < 5; i++)			//store number in MultiArray
	{
	for (int h = 0; h < 8; h++)
	    {
	    int row = i + 1;
	    int column = (2 * h + 1) * 50;
	    MultiArray[i][h] = row * column;
	    }
	}

    for (int i = 0; i < 5; i++)			//get numbers from MultiArray
	{
	for (int v = 0; v < 8; v++)
	    {
	    cout << MultiArray[i][v] << " " << flush;

	    }

	cout << "   row #" << i << endl;
	cout << "   size of MultiArray = " << sizeof(MultiArray[i]) << "bytes"
		<< endl;
	cout << "   colums of MultiArray = " << sizeof(MultiArray[i]) / 4
		<< endl; // 4bytes per int
	cout << endl;
	}

    cout << "size of MultiArray = " << sizeof(MultiArray) << endl;
    cout << "with " << sizeof(MultiArray) / 4 << " total int in it!" << endl;

    cout << endl;

    cout << "---------------------New example with Strings---------------------"
	    << endl;

    string animals[][3] =
	{
	    {
	    "fox", "dog", "cat"
	    },
	    {
	    "mouse", "pig", "goat"
	    }
	};
    //cout << sizeof(animals) << endl;
    //cout << sizeof(animals[0]) << endl;
    //cout << sizeof(string) << endl;

    for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) // finds how many rows
	{//						144bytes    /  72bytes
	for (unsigned int h = 0; h < sizeof(animals[0]) / sizeof(string); h++) // finds how many colums
	    {   //                             72bytes   /  24bytes
	    cout << animals[i][h] << " " << flush;
	    }
	cout << endl;
	}

    return 0;

    }
