//============================================================================
// Name        : String_Streams_Exercise.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>

using namespace std;

string finished = "Y";
string yourReply;
string name;
string info;
int age;

void program()
    {
    cout << "Please enter your name:" << flush;

    cin >> name;

    cout << "Please enter your age:" << flush;

    cin >> age;

    stringstream yourData;

    yourData << "So your name is ";
    yourData << name;
    yourData << ". And you're ";
    yourData << age;
    yourData << " years old";

    info = yourData.str();

    cout << info << endl;
    cout << "Is this information correct?: 'Y/N'" << flush;

    cin >> yourReply;

    }
;

int main()
    {
    program();

    if (finished != yourReply)
	{
	cout << "I'm sorry lets try that again" << endl;
	program();
	}

    cout << "Thank you! And have a nice day!" << endl;

    return 0;
    }
