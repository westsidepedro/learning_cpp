// Outputting Text ---> cout

#include <iostream> //take iostream file and "include" it in this file
         //<iostream> = input output stream
using namespace std;

int main() 
 {
	cout << "starting program..." << flush;
			// flush = basically "endl" WITHOUT a carage ruturn (on the same line)


	cout << "this is some text" << endl;
		     // cout = (Class) output text
		     // << (Insertion Opporator) sends what's in the " " to cout and sends endl to cout
		     // endl = blank line of text after cout AND flushes output buffer


	cout << "banana " << "apple " << "orange" << endl;


	cout << "this is some more text" << endl;


	return 0;

 }