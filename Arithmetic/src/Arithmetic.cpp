//============================================================================
// Name        : Arithmetic.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*
 * +
 * -
 * *
 * /
 * +=		x+y=(new)x
 * -=		x-y=(new)x
 * /=		x/y=(new)x
 * *=		x*y=(new)x
 * %		the remainder of x/y   ie  rValue=15%7 = 7x2=14  15-14=1  rValue=1
 * %=
 * precedence
 */
int main()
    {
    double value = 7 / 2;
    double value1 = (double) 7 / 2;	//(double)x/y  = "casting" converting one type to a similar type

    cout << "value : " << value << endl;
    cout << "value 1: " << value1 << endl;

    int value2 = 7.3;
    int value2x = (int) 7.3;		// casting to int to throw away the .3 b/c int don't do decimals

    cout << "value 2: " << value2 << endl;
    cout << "value 2x: " << value2x << endl;

    int value3 = 8;
    value3 += 3;				// value3 + 1 =(new) value3 ; or value3++
    cout << "value 3: " << value3 << endl;

    int value4 = 10;
    value4 /= 5;				// value4 / 5 =(new) value4
    cout << "value 4: " << value4 << endl;

    int value5 = 12 % 5;			// 12/5 the take the remainder and that is what value5 is!
    int value5x = 13 % 5;

    cout << "value 5: " << value5 << endl;
    cout << "value 5x: " << value5x << endl;

    int value6 = 12;
    int value6x = 13;
    value6%=5;
    value6x%=5;

    cout << "value 6: " << value6 << endl;
    cout << "value 6x: " << value6x << endl;

    return 0;
    }
