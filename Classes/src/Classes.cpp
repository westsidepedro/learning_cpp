
#include <iostream>
#include "Cat.h"	//where the prototype/function/class is located

using namespace std;

int main() {

    Cat cat1;  		//Class then variable name  ie int x


    cat1.speak();	//x run "speak" from class Cat
    cat1.jump();

	/* "Cat" is a template for a cat     *
	 * 				     *
	 * cat1 is a particular cat 	     *
	 *  an "object" in the lingo 	     *
	 * 				     */



	return 0;
}

