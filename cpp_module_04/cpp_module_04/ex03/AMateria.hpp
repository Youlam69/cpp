#ifndef _AMateria_HPP_
#define _AMateria_HPP_

#include "ICharacter.hpp"
#include <iostream>


// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	AMateria
{
	public	:



		AMateria ();
		~AMateria ();
		AMateria (AMateria const &obj);
		AMateria &operator= (const AMateria &obj);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		std::string const & getType() const; //Returns the materia type
		AMateria(std::string const & type);

	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
