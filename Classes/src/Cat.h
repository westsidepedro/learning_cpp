/* .h is a Header file that contains the class/prototype code		*
 *									*
 *		#ifndef NAME_OF_HEADER_					*
 *		#define NAME_OF_HEADER_					*
 *				--- class names ---			*
 *				--- prototypes names ---		*
 *									*
 *		#endif  / * NAME_OF_HEADER_ * /				*
 *									*
 *									*
 *		Prototype is the function name   ie   void speak();	*
 *									*
 ************************************************************************/


#ifndef CAT_H_   //if this file is not defined
#define CAT_H_	 // define it now


/*	class NameOfClass {
 * 	public:
 * 		void whatever1();
 * 		void whatever2();
 * 	};
 * */

class Cat {      //name the class
public:
    void speak();	//"methods" -stuff we want to be included in this class
    void jump();

};



#endif /* CAT_H_ */  // end the definition now
