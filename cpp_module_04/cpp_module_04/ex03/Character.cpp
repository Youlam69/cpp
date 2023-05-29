#include "Character.hpp"

Character::Character()
{
	std::cout << "Character : Default Constructor Called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character : Destructor Called" << std::endl;
}

Character::Character(Character const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Character	&Character::operator= (const Character &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		
	}
	return (*this);
}
