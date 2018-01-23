//============================================================================
// Name        : And_Or.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// And Or  --->   && = and
//		  || = or
//				  can put () in to help read ie...
//	( (x+y>=4) && x-y==18) || x==1			( (X-17<=8) && Y==1) && y>10
//	|----is this true----| OR  ^ is true    	|---is this true---| AND ^ is true

#include <iostream>
using namespace std;

int main()
    {

    int Value1 = 7;
    int Value2 = 6;
    cout << "Value1=" << Value1 << " and Value2=" << Value2 << endl;

    if (Value1 <= 8)
	{
	cout << "Condition1 is: True" << endl;
	}
    else
	{
	cout << "Condition1 is: False" << endl;
	}

    if (Value1 <= 10 && Value2 <= 3)
	{
	cout << "Condition2 is: True" << endl;
	}
    else
	{
	cout << "Condition2 is: False" << endl;
	}

    if (Value1 == 3 || Value2 >= 3)
	{
	cout << "Condition3 is: True" << endl;
	}
    else
	{
	cout << "Condition3 is: False" << endl;
	}

    bool expression1 = (Value1 == 3) || (Value2 >= 3);
    bool expression2 = (Value1 > Value2 && Value1 > 10) || (Value2 > 13);
    if ((expression1) && (expression2))
	{
	cout << "Condition4 is: True" << endl;
	}
    else
	{
	cout << "Condition4 is: False" << endl;
	}

    return 0;

    }
