#ifndef ClapTrap_HPP
#define ClapTrap_HPP

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
	private	:
		std::string		name;
		int				HhitPoints;
		int				EnergyPoints;
		int 			AtackDamage;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
