
#include "Person.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
    {

    Person person1;
    Person person2("Bob", 21);
    Person person3("Jim", 358);

    cout << person1.personalInfo() << endl;
    cout << person2.personalInfo() << endl;
    cout << person3.personalInfo() << endl;

    return 0;
    }
