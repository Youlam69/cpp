#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap : Default Constructor Called" << std::endl;
	HhitPoints = 10;
	EnergyPoints = 10;
	AtackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap : Constructor Called" << std::endl;
	this->name = name;
	HhitPoints = 10;
	EnergyPoints = 10;
	AtackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Assignation Operator Called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		this->HhitPoints = obj.HhitPoints;
		this->EnergyPoints = obj.EnergyPoints;
		this->AtackDamage = obj.AtackDamage;
	}
	return (*this);
}

void  ClapTrap::attack(const std::string& target)
{
	if(this->EnergyPoints == 0 || this->HhitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy or health!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->AtackDamage << " points of damage!" << std::endl;
	this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->HhitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->EnergyPoints == 0 || this->HhitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy or health!" << std::endl;
		return ;
	}
	this->HhitPoints += amount;
	std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
	this->EnergyPoints--;
}