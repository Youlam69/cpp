#ifndef _AMateria_HPP_
#define _AMateria_HPP_

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	AMateria
{
	protected:
		std::string	type;
		//	DataType	attributes.
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria& obj);
		AMateria& operator= (const AMateria& obj);
		
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const = 0;
		std::string const & getType() const; //Returns the materia type

			//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
