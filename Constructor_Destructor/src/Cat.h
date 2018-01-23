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
    private:
	bool happy;	//instance variable, everything created in class Cat will have this

    public:
	void speek();
	Cat();		//Constructor -must be same name as class. and in PUBLIC
	~Cat();		//Destructor  -same as above
    };

#endif /* CAT_H_ */
