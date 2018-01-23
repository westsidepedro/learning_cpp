//============================================================================
// Name        : Instance_Data_Members.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;

int main()
    {
    Cat jim;
    Cat bob;

    cout << "Jim: " << flush;
    jim.makeHappy();
    jim.speek();
    cout << "" << endl;

    cout << "Bob: " << flush;
    bob.makeSad();
    bob.speek();

    return 0;
    }
