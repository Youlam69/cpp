#ifndef _WrongAnimal_HPP_
#define _WrongAnimal_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	WrongAnimal 
{
	public	:
		WrongAnimal ();
		WrongAnimal (WrongAnimal const &obj);
		~WrongAnimal ();
		WrongAnimal &operator= (const WrongAnimal &obj);
		void	makeSound () const;	//	Make sound of the WorngAnimal.

	protected :
		std::string	type;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
