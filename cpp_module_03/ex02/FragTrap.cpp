#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	std::cout << "FragTrap : Default Constructor Called" << std::endl;
	this->HhitPoints = 100;
	this->EnergyPoints = 100;
	this->AtackDamage = 30;
}


FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap : parameter Constructor Called" << std::endl;
	this->name = name;
	this->HhitPoints = 100;
	this->EnergyPoints = 100;
	this->AtackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

FragTrap	&FragTrap::operator= (const FragTrap &obj)
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

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap : high fives guys" << std::endl;
}