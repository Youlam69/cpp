#ifndef _AMateria_HPP_
#define _AMateria_HPP_

#include "ICharacter.hpp"
#include <iostream>


// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	AMateria
{
		protected:

		public:
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
