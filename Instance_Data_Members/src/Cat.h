/*
 * Cat.h
 *
 *  Created on: Jan 4, 2018
 *      Author: jpetterson
 */

#ifndef CAT_H_
#define CAT_H_

class Cat
    {
    private:			//value can NOT be change in our "main" program, only in Cat.cpp
	bool happy;		//declared a variable "happy"

    public:			//value can be changed in "main" program
	void speek();
	void makeHappy();
	void makeSad();
    };

#endif /* CAT_H_ */
