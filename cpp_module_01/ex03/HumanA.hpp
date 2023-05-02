#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &w;
		std::string name;
	public:
		HumanA(std::string _name, Weapon &_w);
		void attack();
};

#endif