//============================================================================
// Name        : Switch.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main()
    {

    int input;
    int count = 0;

    do
	{
	cout << "Please make a selection between 1-3:" << flush;
	cin >> input;

	switch (input)
	    {
	    case 1:
		for (int i = 1; i < 3; i++)
		    {
		    cout << "beatle juice " << endl;

			if (i > 1)
			   {
			   cout << "beatle juice!!!" << endl;
			   break;
			   }
		    }
		;
		break;

	    case 2:
		do
		    {
		    for (int i = 0; i < 13; i++)
			{
			cout << "int i is =" << i << endl;
			}
		    count = count + 1;
		    cout << "run through number: " << count << endl;
		    }
		while (count < 5);
		break;
	    case 3:
		cout << "cheesy puffs" << endl;
		break;
	    default:
		cout << "well shucks, good bye" << endl;
	    }

	}
    while (input <= 3);

    return 0;
    }

