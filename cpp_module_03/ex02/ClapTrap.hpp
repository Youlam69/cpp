// #progma once
#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ClapTrap
{
	public	:
		ClapTrap ();
		ClapTrap(std::string name);
		ClapTrap (ClapTrap const &obj);
		~ClapTrap ();
		ClapTrap &operator= (const ClapTrap &obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected :
		std::string		name;
		int				HhitPoints;
		int				EnergyPoints;
		int 			AtackDamage;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
