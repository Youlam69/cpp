#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB 
{
	private:
		Weapon *w;
		std::string name;

	public:
		HumanB(std::string _name);
		void attack();
		void setWeapon(Weapon &z);
};

#endif
