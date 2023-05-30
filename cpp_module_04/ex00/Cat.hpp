#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"	//	Animal class. (Base class) (Parent class
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Cat : public Animal
{
	public	:
		Cat ();
		Cat (Cat const &obj);
		~Cat ();
		Cat &operator= (const Cat &obj);
		void	makeSound () const;	//	Make sound of the animal.
	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
