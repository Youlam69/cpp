#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : Default Constructor Called" << std::endl;
	type = "Animal_Type_Default";
}

Animal::~Animal()
{
	std::cout << "Animal : Destructor Called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal	&Animal::operator= (const Animal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal : Default sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}