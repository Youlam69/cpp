#ifndef _Ice_HPP_
#define _Ice_HPP_

#include <iostream>
#include "AMateria.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Ice : public AMateria
{
	public	:
		Ice ();
		Ice (Ice const &obj);
		~Ice ();
		Ice &operator= (const Ice &obj);

	private	:
		std::string	type;
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
