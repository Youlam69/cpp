#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	FragTrap : public ClapTrap
{
	public	:
		FragTrap ();
		FragTrap (FragTrap const &obj);
		FragTrap(std::string name);
		~FragTrap ();
		FragTrap &operator= (const FragTrap &obj);

		void highFivesGuys();


	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
