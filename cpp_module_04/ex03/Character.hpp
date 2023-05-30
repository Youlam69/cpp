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
		Character (std::string const & name);
		~Character ();
		Character &operator= (const Character &obj);
		std::string const & getName() const;

		
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		

	private	:
        std::string name;
        AMateria* inventory[4];
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
