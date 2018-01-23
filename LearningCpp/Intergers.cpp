// Interger Variable Types  ---> int , long, long long, unsigned (unsigned only +)

#include <iostream>
#include <climits>

using namespace std;

int main()
 {

 	
	cout << "short int max is: " << SHRT_MAX << endl;
 	cout << "short int min is: " << SHRT_MIN << endl;
 	cout << "unsigned short int max is: " << USHRT_MAX << endl;
		cout << "    -----------" << endl;
 	cout << "int max is: " << INT_MAX << endl;
 	cout << "int min is: " << INT_MIN << endl;
 	cout << "unsigned int max is: " << UINT_MAX << endl;
		cout << "    -----------" << endl;
 	cout << "long max is: " << LONG_MAX << endl;
 	cout << "long min is: " << LONG_MIN << endl;
 	cout << "unsigned long max is: " << ULONG_MAX << endl;
		cout << "    -----------" << endl;
 	cout << "long long max is: " << LLONG_MAX << endl;
 	cout << "long long min is: " << LLONG_MIN << endl;
		cout << "    -----------" << endl;
 	cout << "Size of short int: "  << sizeof(short int) << endl;
 	cout << "Size of int: "  << sizeof(int) << endl;
	cout << "Size of long int: "  << sizeof(long int) << endl;
	cout << "Size of long long int: "  << sizeof(long long int) << endl;


	return 0;
	
 }
