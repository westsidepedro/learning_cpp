//============================================================================
// Name        : MultiArrays.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Multidimensional Arrays --- >   MultiRay[a][b] = {
/*				|----------->	  {  b contols   },
 /				a # of 'rows'	  { the numbers  },
 /				|----------->	  { of 'columns' }
 /						    };
 /					can leave [a] blank, but NOT [b]
 */

#include <iostream>
using namespace std;

int main()
    {
    string animals[2][3] = 	//[a][b]
		{ //  col.0 ,  col.1 ,  col.2
	 /* row1*/  {
		     "dog,", "cat,", "bunny"
		    }, 	    // row1
         /*row2*/   {
		     "fish,", "whale,", "shark"
		    }  //row2
		};

    for (int m = 0; m < 2; m++) //work our way down the 'rows'
	{
	for (int f = 0; f < 3; f++) //work our way a cross the 'colums'
	    {
	    cout << animals[m][f] << " " << flush;
	    }

	cout << endl;

	}
    cout << endl;
    cout << endl;
    cout << "-------10x10 Multiplication Table Test-------" << endl;
    cout << endl;
    cout << endl;

    int array[10][10];

    for (int i = 1; i < 11; i++) 			// this is where we
	{						// make and put values
	for (int j = 1; j < 11; j++) 			// into the array to be
	    {						// recalled whenever we
	    array[i - 1][j - 1] = i * j;				// want
	    }					//at loc [x][y] store value z
	}    // then go back to the top and repeat

    //  now move on || to the next block
    //             \||/
    //		    \/

    for (int i = 0; i < 10; i++) 			// this is we go back
	{						// to recall what we've
	for (int j = 0; j < 10; j++) 			// stored in the array
	    {							// from above
	    cout << " " << array[i][j] << " " << flush;
	    }

	cout << endl;
	}

    cout << endl;

    cout << "---------------------" << endl;

    int NewArray[3][15];
    string LargeWidth = "  "; // 2 spaces
    string SmallWidth = " ";  // 1 space

    for (int a = 0; a < 3; a++)
	{
	for (int b = 0; b < 15; b++)
	    {
	    int row = a + 1;  //b/c a starts at value=0
	    int colum = b + 1;  //b/c b starts at value=0

	    NewArray[a][b] = row * colum;
	    }
	}

    for (int m = 0; m < 3; m++) // row number
	{
	for (int p = 0; p < 15; p++) // column number
	    {
	    if (p < 10)
		{
		cout << NewArray[m][p] << LargeWidth << flush;
		}
	    else
		{
		cout << NewArray[m][p] << SmallWidth << flush;
		}
	    }
	cout << endl;
	}

    return 0;

    }

