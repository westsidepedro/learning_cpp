//============================================================================
// Name        : This_Excerise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Cookies.h"
#include <iostream>

using namespace std;

int main()
    {

    //Cookies order;
    Cookies order1(142, "Chocolate Chip", 100, 25);
    Cookies order2(6685, "Peanut Butter", 5000, 75);
    Cookies order3(421, "Pot", 10000, 0);

   // cout << order.cookieInfo() << endl;
    cout << order1.cookieInfo() << endl;
    cout << order2.cookieInfo() << endl;
    cout << order3.cookieInfo() << endl;


    return 0;
    }
