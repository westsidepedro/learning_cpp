//============================================================================
// Name        : String_Streams.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>  //need this to "add" ints to strings = stringstream  / .str()

using namespace std;

int main()
    {

    string name = "Bob";
    int age = 32;

    stringstream person;		// make a stream of info called "person"
					// sorta like a bucket
    person << "Name is: ";		// first part of our stream of info "person"
    person << name;			// add this info to our stream next
    person << "; Age is: ";		// and then this
    person << age;			// and finally this.
					// the << is putting info into 'bucket' person

    cout << person.str() << endl;	// output stringstreanName.str()

    string info = person.str();	// we can also just make a new string with our new .str();
				// with the same resault as above.

    cout << info << endl;
    return 0;
    }
