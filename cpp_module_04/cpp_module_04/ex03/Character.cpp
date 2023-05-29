#include "Character.hpp"

Character::Character()
{
	std::cout << "Character : Default Constructor Called" << std::endl;
	name = "Default";
	for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string const & name)
{
	std::cout << "Character : Parameter Constructor Called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character : Destructor Called" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
		
}

Character::Character(Character const &obj)
{
	std::cout << "Character : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Character	&Character::operator= (const Character &obj)
{
	std::cout << "Character : Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->name = obj.name;
		for (int i = 0; i < 4; i++)
		{
			if (obj.inventory[i])
				this->inventory[i] = obj.inventory[i]->clone();
		}
	}
	return (*this);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}