#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Brain.hpp"	//	Brain class. (Composition)
#include "Animal.hpp"	//	Animal class. (Base class) (Parent class
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Dog : public Animal
{
	public	:
		Dog ();
		Dog (Dog const &obj);
		~Dog ();
		Dog &operator= (const Dog &obj);
		void	makeSound () const;	//	Make sound of the animal.
	private	:
		Brain	*brain;
		//	DataType	attributes.

};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
