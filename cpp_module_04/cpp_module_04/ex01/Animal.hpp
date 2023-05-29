#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Animal
{
	public	:
		Animal ();
		Animal (Animal const &obj);
		virtual ~Animal ();
		Animal &operator= (const Animal &obj);
		virtual void makeSound () const;	//	Make sound of the animal.
	protected	:
		std::string	type;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
