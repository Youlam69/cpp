#ifndef _ScavTrap_HPP_
#define _ScavTrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ScavTrap : public ClapTrap
{
	public	:
		ScavTrap ();
		ScavTrap (ScavTrap const &obj);
		ScavTrap(std::string name);
		~ScavTrap ();
		ScavTrap &operator= (const ScavTrap &obj);

        void attack(const std::string& target);
		void guardGate();
		void	zebi();


	private	:
		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
