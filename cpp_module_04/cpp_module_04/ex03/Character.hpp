#ifndef _Character_HPP_
#define _Character_HPP_

#include <iostream>
#include "ICharacter.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Character : public ICharacter
{
	public	:
		Character ();
		Character (Character const &obj);
		~Character ();
		Character &operator= (const Character &obj);

	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
