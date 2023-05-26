#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	std::cout << "ScavTrap : Default Constructor Called" << std::endl;
	this->HhitPoints = 100;
	this->EnergyPoints = 50;
	this->AtackDamage = 20;
}


ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap : parameter Constructor Called" << std::endl;
	this->name = name;
	this->HhitPoints = 100;
	this->EnergyPoints = 50;
	this->AtackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScavTrap	&ScavTrap::operator= (const ScavTrap &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->HhitPoints = obj.HhitPoints;
		this->EnergyPoints = obj.EnergyPoints;
		this->AtackDamage = obj.AtackDamage;
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}